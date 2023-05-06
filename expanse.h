#include <iostream>

class Expanse
{
    private:
    std::string item;
    int amount;
    public:
    Expanse(std::string itemParam, int amountParam)
    {
        item = itemParam;
        amount = amountParam;
    }

    int getAmount(void)
    {
        return amount;
    }
    
    void changeAmount(int newAmount)
    {
        amount = newAmount;
    }

};