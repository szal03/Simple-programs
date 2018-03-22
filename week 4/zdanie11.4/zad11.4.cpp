#include "std_lib_facilities.h"

#include <fstream>

int main()
{
	ifstream a;
	a.open("plik2.txt");
	if (!a) error("can not open file");

	ifstream b{ "plik2.txt" }; 
	//if (!b) error("can not open file");

	
	vector<int> liczby;
	int n;
	while (b >> n)
	{
		liczby.push_back(n);
	}

	sort(liczby.begin(), liczby.end());

	int m = 1;

	for (int i = 0; i<liczby.size(); ++i)
	{
		if (i == 0 || liczby[i] != liczby[i - 1])
		{
			//cout << "\n";
			if (m>1) cout << "\t" << m;
			cout << endl;
			m = 1;
			//cout << "\n";
		}
		else ++m;

	}
	ofstream d;
	ofstream e{ "plik.txt" };
	d.open("plik.txt");
	d << m;

	system("pause");
	return 0;
}