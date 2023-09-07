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
		throw ResourceException("Unable to open some resource I need.");
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

	return 0;
}
