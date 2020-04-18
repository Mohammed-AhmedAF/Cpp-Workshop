#include <iostream>
#include <string>

int main(void)
{
	std::string x;
	std::cout << "Here is the menue: " << std::endl;
	std::cout << "1. Burger" << std::endl;
	std::cout << "2. Salat" << std::endl;
	std::cout << "3. Orange juice" << std::endl;
	std::cin >> x;

	int choice = std::stoi(x);

	/*Evaluating user input*/
	if (choice == 1)
	{
		std::cout << "Burger is 3 USD" << std::endl;
	}
	else if (choice == 2)
	{
		std::cout << "Salat is 2 USD" << std::endl;
	}
	else if (choice == 3)
	{
		std::cout << "Orange juice is 1.5 USD" << std::endl;
	}
	else
	{
		std::cout << "Invalid choice!" << std::endl;
	}

}
