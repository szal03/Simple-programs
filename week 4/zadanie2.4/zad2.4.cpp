#include "std_lib_facilities.h"
#include <fstream>

using namespace std;

void open_read(vector<int>& b)
{
	ifstream a;
	a.open("zadania.txt"); 
	if (!a) error("can not open file ");
	int n;
	while (a >> n) 
	{
		if (n != ' ')
		{
			b.push_back(n);
		}
	}
}


int sum1(const vector<int>& c)
{
	int sum = 0;
	for (int i = 0; i < c.size(); ++i)
	{
		sum += c[i];
	}
	return sum;
}

int main()
{
	vector<int> w;
	open_read(w);
	int sum = sum1(w);
	cout << "Sum of numbers " << sum << ".\n";

	system("pause");
}
