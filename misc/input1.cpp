#include <iostream>

int main(void)
{
	std::cout << "Enter your name: " << std::endl;
	std::string first_name, last_name;
	std::cin >> first_name >> last_name;
	std::cout << "Hello, " << first_name << " " << last_name << std::endl;
	size_t size1 = first_name.size();
	size_t size2 = last_name.size();
	std::cout << "Your first name is " << size1 << " characters long.\n";
	std::cout << "Your last name is " << size2 << " characters long.\n";
	std::string stars (size1+size2,'*');
	std::cout << stars << "\n";

	return 0;

}
