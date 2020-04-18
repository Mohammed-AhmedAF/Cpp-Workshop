#include <iostream>

int getMax(int a, int b);

int getMax(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else if(a < b)
	{
		return b;
	}
	else
	{
		return a;
	}

}

int main(void)
{
	int x,y;
	std::cout << "Enter the first number: " << std::endl;
	std::cin >> x;
	std::cout << "Enter the second numnber: " << std::endl;
	std::cin >> y;
	std::cout << "The bigger number is " << getMax(x,y) << " " << std::endl;


}
