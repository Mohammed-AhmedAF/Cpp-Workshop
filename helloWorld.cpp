#include <iostream>
#include <string>

int main(void)
{

	std::string name;
	std::cout << "Hello World" << std::endl;
	std::getline(std::cin,name);
	std::cout << "Hello, " << name << "!\n";
	while(1);
}
