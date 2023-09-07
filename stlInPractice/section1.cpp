#include <iostream>
#include <string>

template <typename T>
class Container
{
	T t;

	public:
	explicit Container(T t) : t(t)
	{
	}

	friend std::ostream & operator << (std::ostream & os, const Container<T> & c)
	{
		return (std::cout << "Container holding: " <<c.t); 
	}

};

template <typename X>
bool isGreater(X a, X b)
{
	return a > b;
}

template <>
bool isGreater<int>(int a, int b)
{
	std::cout << "Specialized template function" << std::endl;
	return a>b;
}

int main(void)
{
	Container<int> c(100);
	Container<std::string> S("Some string");

	std::cout << c << "\n";
	std::cout << S << "\n";

	std::cout << std::boolalpha;
	std::cout << isGreater<int>(5,6) << std::endl;
	return 0;
}
