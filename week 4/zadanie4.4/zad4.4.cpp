#include "std_lib_facilities.h"
#include <fstream>


int main()
{
	string name1; // do wczytu
	string name2; // do wczytu
	//string name3;// do wpisu
	cout << "Enter first file name: \n";
	cin >> name1;

	ifstream a;
	a.open({ name1 });
	if (!a) error("can not open file!", name1);

	cout << "Enter second file name: \n";
	cin >> name2;
	ifstream b;
	b.open({ name2 });
	if (!b) error("can not open file!", name2);

	ofstream c;
	c.open("plik3.txt");
	if (!c) error("can not open output file!");

	string fname1;
	string fname2;
	a >> fname1;
	b >> fname2;

	while (true)
	{
		if (fname1 <= fname2)
		{
			c << fname1 << endl;
			if (a.eof()) break;
			else a >> fname1;
		}
		else 
		{
			c << fname2 << endl;
			if (b.eof()) break;
			else b >> fname2;
		}
	}

	if (a.eof()) 
	{
		c << fname2 << endl;
		while (b >> fname2) c << fname2 << endl;
	}
	else {
		c << fname1 << endl;
		while (a >> fname1) c << fname1 << endl;
	}
	

	system("pause");
}