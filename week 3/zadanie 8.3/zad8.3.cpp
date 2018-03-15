#include "std_lib_facilities.h"

vector<string>a;
vector<int>b;

void print1(vector<string>a)
{
	cout << "{";
	for (int i = 0; i < a.size(); ++i)
	{
		cout << a[i] << " ";
	}
	cout << "}";
}
void change_to_numbers(vector<string>a)
{
	int n = a.size();
	cout << "{";
	for (int i = 0; i < a.size(); ++i)
	{
		b.push_back(n);
		cout << b[n];
	}
	cout << "}";


}




int main()
{
	vector<string>v1;
	v1.push_back("buu");
	print1(v1);
	change_to_numbers(v1);

	

	system("pause");
}