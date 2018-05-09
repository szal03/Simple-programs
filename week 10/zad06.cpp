#include"std_lib_facilities.h"
#include<iostream>
#include<regex>


using namespace std;

int main()
{
	regex pat(".");
	string s = "\n";
	
	smatch matches;
	if (regex_match(s, matches, pat))
	{
		cout << "'.' matches '\\n'\n";
	}
	else
	{
		cout << "'.' does not match '\\n'\n";
	}

	system("pause");
}