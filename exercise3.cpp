#include <iostream>
#include <string>

int main(void)
{
	std::string name, lastName;
	std::cout << "Enter your name: " << std::endl;
	std::cin >> name;
	std::cout << "Enter your last name: " << std::endl;
	std::cin >> lastName;
	std::cout << name << " " << lastName << std::endl;
}
