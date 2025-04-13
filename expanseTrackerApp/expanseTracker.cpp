#include <iostream>
#include <vector>
#include "expanse.h"
#include <stdlib.h>
#include <fmt/color.h>

//Store expanses in this vector
std::vector<Expanse*> expanses;

void exitProgram(void)
{
    std::cout << "Exiting.." << std::endl;
    std::exit(0);
}

void addExpanse(void)
{
    std::string expanseItem;
    int payedAmount;
    std::cout << "Expanse: " << std::endl;
    std::cin >> expanseItem;
    std::cout << "Payed: " << std::endl;
    std::cin  >> payedAmount;
    expanses.push_back(new Expanse(expanseItem,payedAmount));
    std::cout << "Expanse stored successfulyy" << std::endl;
    
}

void displayCommands(void)
{
   
    std::cout << "a - Add expanse" << std::endl;
    std::cout << "b - Display total" << std::endl;
    std::cout << "c - Print to file" << std::endl;
    fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold,
    "d - Exit\r\n");
}

void displayTotal(void)
{
    int totalExpanses {0};
    for (auto expanse : expanses)
    {
        totalExpanses += expanse->getAmount();
    }
    std::cout << "Total: " <<  totalExpanses << std::endl;
}

void processUserInput(char userInput)
{
    switch(userInput)
    {
        case 'a':
        addExpanse();
        break;
        case 'b':
        displayTotal();
        case 'c':
        break;
        case 'd':
        exitProgram();
        default:
        std::cout << "Invalid user input" << std::endl;
        break;
    }
}

int main(void)
{
    char userInput;
    while(1)
    {
        displayCommands();
        std::cin >> userInput;
        processUserInput(userInput);
    }
    return 0;
}