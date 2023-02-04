#include <iostream>
#include <vector>

//What are the unintended consequences of not defining a virtual deconstructor?
//You should also declare the deconstructor of the base class as virtual
//It is advisable to add the virtual keyword to the overriding functions in the derived classes.
//override is put in method definition to produce an error if the function inteded to overriding is different
//in signature from the overriden funciton 

//final: When used with a method, prevents further overriding of this method
//final: When used with a class, prevents inheritance of this class


class Account
{
	private:
		int credit;
	public:
		Account(int cr)
		{
			credit = cr;
		}

		Account()
		{
			credit = 0;
		}

		virtual ~Account()
		{
			std::cout << "Account deconstructor is called." << std::endl;
		}

		int getCredit(void) const
		{
			return credit;
		}

		virtual void showCredit(void)
		{
			std::cout << "Account Credit is " << credit << "." << std::endl;
		}

		virtual void withdraw(void)
		{
			std::cout << "Account::withdraw" << std::endl;
		}



};

class Saving : public Account
{
	public:
		Saving(int cr) : Account(cr)
		{

		}

		virtual ~Saving()
		{
			std::cout << "Saving deconstructor is called." << std::endl;
		}

		virtual void showCredit(void)
		{
			std::cout << "Saving credit is " << getCredit() << "." << std::endl;
		}

		virtual void withdraw(void) override
		{
			std::cout << "Saving::withdraw" << std::endl;
		}

	
};


class Trust : public Account 
{
	public:
		Trust (int cr) : Account(cr)
		{
		
		}

		virtual ~Trust()
		{
			std::cout << "Trust deconstructor is called." << std::endl;	
		}

		virtual void showCredit(void)
		{
			std::cout << "Trust credit is " << getCredit() << "." << std::endl;
		}

		virtual void withdraw(void) override
		{
			std::cout << "Trust::withdraw" << std::endl;
		}

};

class SpecialSaving : public Saving
{
	public:
		SpecialSaving(int cr) : Saving(cr)
	{
	
	}
		virtual void withdraw(void)
		{
			std::cout << "SpecialSaving withdraw" << std::endl;
		}

};


int main(void)
{
	Account * p1 = new Account(50);
	Account * p2 = new Saving(50);
	Account * p3 = new Trust(60);
	Account * p4 = new SpecialSaving(100);

	std::vector<Account*> accounts;
	accounts.push_back(p1);
	accounts.push_back(p2);
	accounts.push_back(p3);
	accounts.push_back(p4);

	for (auto account : accounts)
	{
		account->withdraw();
	}

	delete p1;
	delete p2;
	delete p3;
	delete p4;

	return 0;
}

