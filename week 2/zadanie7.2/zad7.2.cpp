#include "std_lib_facilities.hpp"

int main()
{
	double a, b,c, delta, x1,x2;
	cout << "Write a: ";
	cin >> a;
	cout << "Write b: ";
	cin >> b;
	cout << "Write c: ";
	cin >> c;

	delta = (b*b) - (4 * a*c);
	if (delta < 0)
	{
		cout << "There is no real solve";
	}

	x1 = (-b - sqrt(delta)) / (2 * a);
	x2= (-b + sqrt(delta)) / (2 * a);

	cout <<"x1: "<< x1 << endl;
	cout << "x2: "<< x2 << endl;


	system("pause");
}