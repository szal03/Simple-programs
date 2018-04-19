#include "std_lib_facilities.hpp"

using namespace std;

int a = 0;
int b = 0;
int c = 0;

int main()
{
	int* aa = &a;
	int* ab = &b;
	int* ac = &c;
	
	cout << aa << "\n";
	cout << ab << "\n";
	cout << ac <<"\n";
	
	if (aa > ab && aa > ac)
	{
		cout << "adresy rosna w gore (static storage) \n";
	}
	else
	{
		cout << "adresy rosna w dol (static storage) \n";
	}

	cout << "\n";
	int d = 0;
	int e = 0;
	int f = 0;
	int* bd = &d;
	int* be = &e;
	int* bf = &f;
	cout<<bd<< "\n";
	cout<<be<< "\n";
	cout<<bf<< "\n";
	if (bf > be && bf>bd)
	{
		cout << "stos rosnie w dol \n";
	}
	else
	{
		cout << "stos rosnie w gore \n";
	}
	cout << "\n";
	int* g = new int(0);
	int* h = new int(0);
	int* i = new int(0);
	cout << g << "\n";
	cout << h << "\n";
	cout << i << "\n";
	if (i > h)
	{
		cout << "sterta rosnie w dol\n";
	}
	else
	{
		cout << "sterta rosnie w gore\n";
	}
	cout << "\n";
	int* j = new int[3];
	for (int n = 0; n < 3; ++n)
	{
		j[n] = 0;
		cout << &j[n] << "\n";
	}
	if (&j[3] > &j[2])
	{
		cout << "adressy tablicy rosna w dol\n ";
	}
	else
	{
		cout << "adresy tablicy rosna w gore\n";
	}

	delete[] j;
	delete g;
	delete h;
	delete i;



	system("pause");
}