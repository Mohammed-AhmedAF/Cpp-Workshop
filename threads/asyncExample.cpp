#include <iostream>
#include <future>
#include <thread>

int func(void)
    {
        int temp_val = 0;
        for (int i= 0; i < 1000;i++)
        {
            temp_val++;
        }
        return temp_val;
    }


int main(void)
{
    std::cout << "Before calling async" << std::endl;
    auto res = std::async(std::launch::deferred,func);
    std::cout << "After declaring async" << std::endl;

    std::cout << res.get() << std::endl;
    return 0;

}