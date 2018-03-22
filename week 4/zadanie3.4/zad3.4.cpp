#include "std_lib_facilities.h"
#include <fstream>

using namespace std;


int main()
{
	string name1, name2,name3;
	char d;
	cout<<"write name of first file to open: " << endl;
	cin >> name1;
	ifstream a;
	a.open({ name1 });
	if (!a) error("Can not open this file: ", name1);
	cout << "write name of second file to open: " << endl;
	cin >> name2;
	ifstream b;
	b.open({ name2 });
	if (!b) error("Can not open this file: ", name2);
	cout << "write name of new file: " << endl;
	cin >> name3;
	ofstream c;
	c.open({ name3 });
	if (!c) error("Can not create file! ", name3);

	while (a.get(d)) c << d;
	while (b.get(d)) c << d;

	a.close();
	b.close();
	c.close();
	system("pause");
}