#include "std_lib_facilities.hpp"

using namespace std;

void print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
	{
		os << a[i] << "\n";
	}
}
void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		os << a[i] << "\n";
	}
}
void print_vector(ostream& os, vector<int> v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		os << v[i] << "\n";
	}
}

int main()
{
	int* n = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		cout << n[i] << "\n";
	}

	delete[]n;
	cout << "\n";

	int* m = new int[10]; //5
	for (int i = 0; i < 10; ++i)
	{
		m[i] = 100 + i;
	}
	print_array10(cout, m);
	delete[] m;
	cout << "\n";
	//6

	int* o = new int[11];
	for (int i = 0; i < 11; ++i)
	{
		o[i] = 100 + i;
	}
	print_array10(cout, o);
	//cout << "\n";
	cout << o[10] << "\n";
	delete[] o;

	cout << "\n";
	int* p = new int[20];
	for (int i = 0; i < 20; ++i)
	{
		p[i] = 100 + i;
	}
	print_array(cout, p, 20);
	delete[] p;
	cout << "\n";
	//10

	vector<int> c;
	for (int i = 0; i < 10; ++i)
	{
		c.push_back(100 + i);
	}
	print_vector(cout, c);
	cout << "\n";
	vector<int> d;
	for (int i = 0; i < 11; ++i)
	{
		d.push_back(100 + i);
	}
	print_vector(cout, d);
	cout << "\n";
	vector<int> e;
	for (int i = 0; i < 20; ++i)
	{
		e.push_back(100 + i);
	}
	print_vector(cout, e);
	cout << "\n";

	system("pause");
}