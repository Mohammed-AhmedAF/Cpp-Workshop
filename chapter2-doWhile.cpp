#include <iostream>
#include <string>

bool checkNumber(int x);

int main(void)
{
	std::string choice;
	std::cout << "Enter a number: " << std::endl;
	std::cin >> choice;
	int x = std::stoi(choice);
	if (checkNumber(x) == true)
	{
		int i = 0;
		do {
			std::cout <<  i++ << std::endl;
		}while(i < x);
	}
	else
	{
		std::cout << "You entered an invalid number" << std::endl;
	}
	
}

bool checkNumber(int x)
{
	if (x > 0)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
