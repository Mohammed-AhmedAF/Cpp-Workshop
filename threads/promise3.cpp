#include <iostream>
#include <future>
#include <thread>

void producer(std::promise<int> prom,int limit)
{
    int temp_sum = 0;
    for (int i = 0; i < limit; i++)
    {
        temp_sum += i;
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    prom.set_value(temp_sum);
}

void consumer_1(std::shared_future<int> sh_fut)
{
    if (!sh_fut.valid()) 
    {
        std::cout << "Consumer 1 waiting for result of sum" << std::endl;
    }
    std::cout << sh_fut.get() << std::endl;
}

void consumer_2(std::shared_future<int> sh_fut)
{
    if (!sh_fut.valid())
    {
        std::cout << "Consumer 2 waiting for result of sum" << std::endl;
    }
    std::cout << sh_fut.get() << std::endl;
}

int main(void)
{
     std::promise<int> prom;
     std::shared_future<int> fut_shared = prom.get_future();

     std::thread prod_thread {producer,std::move(prom),1000};
     std::thread consumer_thread1 {consumer_1,fut_shared};
     std::thread consumer_thread2 {consumer_2,fut_shared};

     prod_thread.join();
     consumer_thread1.join();
     consumer_thread2.join();

     return 0;
}