#include "std_lib_facilities.hpp"

int main()
{
	double a, b, d;
	char c;
	cout << "write two values: \n";
	cin >> a;
	cin >> b;
	cout << "character to represent an operation(+,-,*,/):  \n";
	cin >> c;
	if (c == '+')
	{
		d = a + b;
		cout <<"The sum of "<<a<<" and "<<b<<" is "<< d << "\n";
	}
	else if (c == '-')
	{
		d = a - b;
		cout <<"The difference between "<<a<<" and "<<b<<" is "<<d<< "\n";
	}
	else if (c == '*')
	{
		d = a*b;
		cout <<"The multiplication of "<<a<<" and "<<b<<" is "<< d << "\n";
	}
	else if (c == '/')
	{
		d = a / b;
		cout <<"dividing "<<a<<" by "<<b<< " is " << d << "\n";
	}


	system("pause");
}