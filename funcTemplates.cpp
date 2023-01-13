#include <iostream>

template <typename T>
T min(T a, T b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

struct Person
{
	std::string name;
	int age;

	bool operator< (const struct Person & rhs) const
	{
		if (this->age < rhs.age)
		{
		  return true;
		}
		else
		{
			return false;
		}
	}
};

int main(void)
{
	struct Person p1 {"Mohamed",30};
	struct Person p2 {"Ali",29};

	struct Person p3 = min(p1,p2);

	std::cout << p3.name << std::endl;

	return 0;


}
