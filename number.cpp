#include <iostream>
#include <string>

int main(void)
{
	std::string number;
	std::cout << "Please, enter a number: " << std::endl;
	std::cin >> number;
	int x = std::stoi(number);
	if (x > 10)
	{
		std::cout << "The number is bigger than 10" << std::endl;
	}
	else if (x < 10)
	{
		std::cout << "Number is less than 10" << std::endl;
	}
	else 
	{
		std::cout << "Number is equal to 10" << std::endl;
	}
	
}
