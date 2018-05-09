#include "std_lib_facilities.h"
#include<regex>
#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<sstream>
#include<stdexcept>

using namespace std;

int main()
{
	while (1)
	{
		string a;
		string s_line;
		string name;
		int l = 0;
		cout << "Pattern ";
		getline(cin, a);   
		regex pattern;
		pattern = a;  
		cout << "write file name: ";
		getline(cin, name);
		ifstream fil(name);
		if (!fil){	cout << "can not open file\n"; }
		
		while (getline(fil, s_line))
		{
			l++;
			smatch matches;
			if (regex_search(s_line, matches, pattern))
			{
				cout << setw(5) << l << ": " << s_line << "\n";
			}
		}
	}
	system("pause");

}