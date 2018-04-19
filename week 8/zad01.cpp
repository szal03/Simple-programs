#include "std_lib_facilities.hpp"

int gai[10] = { 1,2,4,8,16,32,64,128,256,512};

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		os << a[i] << "\n";
	}
}

void f(int array[], int arg)
{
	int la[10];

	for (int i = 0; i < 10; i++)
	{
		la[i] = gai[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << la[i];
		cout << "\n";
		
	}

	int *p = new int[arg];
	for (int i = 0; i < arg; i++)
	{
		p[i] = array[i];
		cout << "\n";
		cout << array[i];
	}

	delete[] p;
}

int main()
{
	
	f(gai, 10);
	cout << "\n";
	int aa[10];
	aa[0] = 1;
	
	for (int i = 1; i < 10; i++)
	{
		aa[i] = aa[i - 1] * (i + 1);
	}

	f(aa, 10);
	cout << "\n";


	system("pause");
}