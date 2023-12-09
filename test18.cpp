#include <iostream>
#include <vector>

class Person
{
	private:
	std::string name;
	int age;
	public:
	Person(std::string name_par, int age) : name{name_par}, age {age}{};

	int getAge(void) const {
		return age;
	}

	std::string getName(void) const 
	{
		return name;
	}

	void setAge(int age_par)
	{
		age = age_par;
	}

	void sayMessage(std::string message)
	{
		std::cout << message << std::endl;
	}

};


class Student : public Person
{
	private:
	int grade;
	public:
	Student(std::string name_par, int age_par, int grade_par) : Person(name_par,age_par), grade(grade_par){};

	int getGrade(void) const
	{
		return grade;
	}
};

int main(void)
{
	Person per {"Mohamed",29};

	std::cout << per.getAge() << std::endl;

	Student * stPtr1 {new Student("Sami",18,200)};
	std::cout << stPtr1->getAge() << std::endl;

	Student * stPtr2 {new Student("Gamal",19,175)};
	
	std::cout << "Printing student data" << std::endl;
	std::cout << stPtr1->getName() << std::endl;

	return 0;
}
