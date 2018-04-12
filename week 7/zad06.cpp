//zad 9/624

#include "std_lib_facilities.hpp"

int main()
{
	// stos
	cout << "Adressy (stos): \n";

	int a = 0;
	int b = 0;
	int c = 0;

	int roznica_adress = &b - &a;
	//int s;
	cout << &a << "\n";
	cout << &b << "\n";
	cout << &c << "\n";
	
	if (roznica_adress > 0)
	{
		cout << "stos rosnie w gore\n";
	}
	else
	{
		cout << "stos rosnie w dol \n";
	}

	// sterta
	cout << "Adressy (sterta): \n";

	int* d = new int(0);
	int* e = new int(0);
	int* f = new int(0);

	cout << d << "\n";
	cout << e << "\n";
	cout << f << "\n";

	int roznica2 = e - d;

	if (roznica2 > 0)
	{
		cout << "sterta rosnie w gore \n";
	}
	else 
	{ 
		cout << "sterta rosnie w dol \n";
	}

	delete d;
	delete e;
	delete f;
	//return 0;
	system("pause");
}