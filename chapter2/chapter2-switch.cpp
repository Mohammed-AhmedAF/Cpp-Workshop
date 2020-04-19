#include <iostream>
#include <string>

int main(void)
{
	std::string choice;
	std::cout << "Menu is: " << std::endl;
	std::cout << "1. Burger" << std::endl;
	std::cout << "2. Salat" << std::endl;
	std::cout << "3. Orange juice" << std::endl;
	std::cin >> choice;

	int x = std::stoi(choice);
	switch(x)
	{
		case 1:
			std::cout << "Burger is 1 USD" << std::endl;
		break;
		case 2:
			std::cout << "Salat is 2 USD" << std::endl;
			break;
		case 3:
			std::cout << "Orange juice is 3 USD" << std::endl;
			break;
		default:
			std::cout << "Invalid choice" << std::endl;
	}
}
