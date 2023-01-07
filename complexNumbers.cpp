#include <iostream>

struct ComplexNumber
{
		int realNum;
		int imagNum;
		ComplexNumber(int rN, int iN) : realNum{rN}, imagNum{iN}
		{};

		ComplexNumber operator+ (const ComplexNumber & oper2)
		{
			ComplexNumber result =  ComplexNumber(0,0);
			result.realNum = oper2.realNum + realNum;
			result.imagNum = oper2.imagNum + imagNum;
			return result;
		}

		friend std::ostream & operator << (std::ostream & os, const ComplexNumber & complexN);


};

std::ostream & operator << (std::ostream & os, const ComplexNumber & complexN)
{
	os << "Result is " << complexN.realNum << "+" << complexN.imagNum <<"i" << std::endl;

	return os;
}

int main(void)
{

	ComplexNumber obj1 = ComplexNumber(2,3);
	ComplexNumber obj2 = ComplexNumber(3,2);

	ComplexNumber res = obj1 + obj2;
	std::cout << res;

	return 0;
}
