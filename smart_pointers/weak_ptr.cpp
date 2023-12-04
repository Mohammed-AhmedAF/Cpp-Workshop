#include <iostream>
#include <memory>

int main(void)
{
    std::shared_ptr<int>  sptr1 {std::make_shared<int>(5)};

    std::weak_ptr<int> wptr = sptr1;

    //sptr1 = nullptr;

    std::shared_ptr<int> sptr2 = wptr.lock();

    if (sptr2)
    {
        std::cout << "Data is " << *sptr2 << std::endl;
    }
    else
    {
        std::cout << "Data is invalid." << std::endl;
    }

    return 0;
}