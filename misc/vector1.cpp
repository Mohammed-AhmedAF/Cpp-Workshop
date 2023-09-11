#include <iostream>
#include <vector>
#include <exception>

template <typename T>
void printVector(const T & vec)
{
	std::cout << "Size: " << vec.size() << ", capacity: " << vec.capacity() << "\n";

	for (auto const & t : vec)
	{
		std::cout << t << " ";
	}
	std::cout << "\n";
}


int main(void)
{
	std::vector<int> vec1;
	vec1.push_back(120);
	vec1.push_back(130);
	vec1.push_back(150);


	printVector(vec1);

	vec1.resize(2);

	printVector(vec1);

	//Accessing by pointer
	for (int * p = &vec1[0]; p < (&vec1[0] + vec1.size()); *p++)
	{
		std::cout << *p << std::endl;
	}

	return 0;
}
