#include "std_lib_facilities.h"



int main()
{
	int a;
	int b;
	int c;

	cout << "write 3 numbers \n";
	cin >> a;
	cin >> b;
	cin >> c;



	if (a >= b && a >= c)
	{
		if (b >= c)
		{
			cout << c << "," << b << "," << a << ";\n";
		}
		if (c >= b)
		{
			cout << b << "," << c << "," << a << ";\n";
		}

	}
	else if (b >= a && b >= c)
	{
		if (a >= c)
		{
			cout << c << "," << a << "," << b << ";\n";
		}
		if (c >= a)
		{
			cout << a << "," << c << "," << b << ";\n";
		}
	}
	else if (c >= b && c >= a)
	{
		if (b >= a)
		{
			cout << a << "," << b << "," << c << ";\n";
		}
		if (a >= b)
		{
			cout << b << "," << a << "," << c << ";\n";
		}

	}





	system("pause");
}

/*int main()
{
	string a;
	string b;
	string c;

	cout << "write 3 numbers \n";  
	cin >> a;
	cin >> b;
	cin >> c;



	if (a >= b && a >= c)
	{
		if (b >= c)
		{
			cout << c << "," << b << "," << a << ";\n";
		}
		if (c >= b)
		{
			cout << b << "," << c << "," << a << ";\n";
		}

	}
	else if (b >= a && b >= c)
	{
		if (a >= c)
		{
			cout << c << "," << a << "," << b << ";\n";
		}
		if (c >= a)
		{
			cout << a << "," << c << "," << b << ";\n";
		}
	}
	else if (c >= b && c >= a)
	{
		if (b >= a)
		{
			cout << a << "," << b << "," << c<<";\n";
		}
		if (a >= b)
		{
			cout << b << "," << a << "," << c <<";\n";
		}

	}





	system("pause");
}*/
