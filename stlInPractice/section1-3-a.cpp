#include <iostream>
#include <exception>

class ResourceException : public std::exception
{
	std::string w;
	public:
	//Default constructor
	ResourceException(const std::string & w) : w{w} {} 

	//Override the virtual what method
	const char * what() const noexcept
	{
		return w.c_str();
	}


};

class SomethingImportant
{
	public:
	SomethingImportant()
	{
		throw 10;
	}
	
};


int main(void)
{
	try
	{
		SomethingImportant si;

	} catch	(std::exception & except)
	{
		std::cout << except.what() << std::endl;
		return 1;
	}
	catch (int x)
	{
		std::cout << "I cought an int value " << x << std::endl;
		return 2;
	}

	return 0;
}
