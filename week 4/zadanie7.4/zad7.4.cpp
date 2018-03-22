#include "std_lib_facilities.h"

int main()
{
	cout << "Enter name of file: ";
	string name;
	cin >> name;
	ifstream a(name.c_str());
	if (!a) error("can not open file ", name);

	cout << "Enter name of output file: ";
	string name2;
	cin >> name2;
	ofstream b(name2.c_str());
	if (!b) error("can not open file ", name2);

	char c;
	while (a.get(c)) 
	{
		if (isalpha(c)) c = tolower(c);
		b << c;
	}
	system("pause");
}