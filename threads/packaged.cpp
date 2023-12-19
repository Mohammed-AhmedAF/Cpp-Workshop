#include <future>
#include <iostream>

int main(void)
{
    std::packaged_task<int(int,int)> ptask {[](int a, int b){ return b+a;}};

    std::future<int> fut = ptask.get_future();

    ptask(6,7);
    std::cout << fut.get() << std::endl;

    return 0;
}