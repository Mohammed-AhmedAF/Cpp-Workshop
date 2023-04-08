#include <iostream>

class Base
{
	private:
		int num;
	public:
		Base(int n)
		{
			num = n;
	
		}

	virtual void sayHello(void)
		{
			std::cout << "Base says hello" << std::endl;
		}

	virtual	~Base()
		{
			std::cout << "Base deconstructor is called" << std::endl;
		}
};


class Child : public Base
{
	public:
		Child (int n) : Base(n)
		{
		}
	void sayHello(void) override
		{
			std::cout << "Child says hello" << std::endl;
		}	
	
	virtual ~Child()
	{
		std::cout << "Child decontructor is called" << std::endl;
	}

};

int main(void)
{
	Base * obj1 = new Base(5);
	Base * obj2 = new Child(5);

	obj1->sayHello();
	obj2->sayHello();

	delete obj1;
	delete obj2;

	return 0;	
}
