#include <iostream>
#include <string>

int main(void)
{
	//Declaring strings
	std::string name = "James Slocum";
	std::string n2("James Slocum");
	std::string n3(name);

	std::string n4 {'J','a','m','e','s'};
	std::string last(name,6,6);
	//Fill constructor
	std::string line(20,'-');

	std::string reverse(name.rbegin(),name.rend());

	//Finding string 
	std::size_t pos = name.find(n4);

	if (pos != std::string::npos)
	{
		std::cout << "Found first name at " << pos << std::endl;
	}

	std::cout << line << '\n';

	//Appending to a string
	std::string about = " is a programmer";
	name.append(about);

	std::cout << name << std::endl;

	//Inserting into a string
	name.insert(0,"I have heard that ");
	std::cout << name << std::endl;

	//Replace some string
	std::string oldJob = "programmer";
	pos = name.find("programmer");
	name.replace(pos,oldJob.length(), "snowboarder");

	std::string verb = "heard";
	std::string newVerb = "read somewhre";
	pos = name.find(verb);
	name.erase(pos,verb.length());
	name.insert(pos,newVerb);
	std::cout << name << '\n';
	return 0;
}
