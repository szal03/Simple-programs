#include "std_lib_facilities.h"
#include <fstream>

const string b = "binar.txt";  

void b_change(const string& s)
{
	ifstream a(s.c_str());
	if (!a) error("can not open file", s);

	ofstream o(b.c_str(), ios_base::binary);
	if (!o) error("can not open file ", b);

	char c;
	while (a.get(c)) 
	{
		o.write(as_bytes(c), sizeof(char));
	}
}


void exchange(const string& s)
{
	ofstream d(s.c_str());
	if (!d) error("can not open file", s);

	ifstream e(b.c_str(), ios_base::binary);
	if (!e) error("can not open file ", b);

	char c;
	while (e.read(as_bytes(c), sizeof(char))) 
	{
		d << c;
	}
}
int main()
{
	cout << "Enter name of file to open: ";
	string name1;
	cin >> name1;
	cout << "Enter name of file to write: ";
	string name2;
	cin >> name2;

	b_change(name1);
	exchange(name2);

	system("pause");
}