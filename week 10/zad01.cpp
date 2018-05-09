#include <regex> 
#include <iostream>
#include <string>
#include <fstream>
#include "std_lib_facilities.h"

using namespace std;
int main()
{
	ifstream input{ "plik.txt" }; 
	if (!input)
	{
		cout << "file not found" << endl;
	}

	regex pat{ R"(\w{2}\s*\d{5}(–\d{4})?)" };
	

	int b = 0;
	for (string l; getline(input, l); )
	{ 
		++b;
		smatch matches; 
		if (regex_search(l, matches, pat))
		{
			cout << b << ": " << matches[0] << '\n';

			if (1 < matches.size() && matches[1].matched)
			{
				cout << "\t: " << matches[1] << endl;
			}
		}
	}
	
	system("pause");
}