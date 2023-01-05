#include <iostream>
#include <bits/stdc++.h>

#define TOGGLE_BIT(reg,bit) reg ^= (1<<bit)

int main(void)
{
    int x = 2;
    std::bitset<32> bsetBefore(x);
    std::cout << bsetBefore << std::endl;

    int pos = 2;
    int n  = 5;
    for (int i = pos; i <= n; i++)
    {

        TOGGLE_BIT(x,i);
    }

    std::cout << x << std::endl;
    std::bitset<32> bsetAfter(x);

   std::cout << bsetAfter << std::endl;

}