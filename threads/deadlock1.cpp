#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

std::mutex mut1;
std::mutex mut2;

void func1(void)
{

    std::unique_lock<std::mutex> ul1 {mut1};
    std::cout << "Thread 1 has locked mutex1" << std::endl;
    std::this_thread::sleep_for(std::chrono::microseconds(50));
    std::cout << "Thread 1 tries to lock mutex2" << std::endl;
    std::unique_lock<std::mutex> ul2 {mut2};
    std::cout << "Thread 1 has locked mutex2" << std::endl;

}

void func2(void)
{
    std::unique_lock<std::mutex> ul2a {mut2};
    std::cout << "Thread 2 has locked mutex2" << std::endl;
    std::this_thread::sleep_for(std::chrono::microseconds(50));
    std::cout << "Thread 2 tries to lock mutex1" << std::endl;
    std::unique_lock<std::mutex> ul2b {mut1};
    std::cout << "Thread 2 has locked mutex1" << std::endl;
}

int main(void)
{
    std::thread thread1 {func1};
    std::thread thread2 {func2};

    thread1.join();
    thread2.join();

}