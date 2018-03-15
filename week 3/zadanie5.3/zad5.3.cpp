#include"std_lib_facilities.h"

using namespace std;

void print(string& label, vector<int>&v) //str227
{
	cout << label << "{";
	for (int i = 0; i<v.size(); ++i)
	{
		if (i % 8 == 0) cout << endl;
		cout << v[i];
		if (i<v.size() - 1) cout << ", ";
	}
	cout << "\n}\n";
}

void fibonacci(int x, int y, vector<int>&v, int n)
{
	v.push_back(x);
	if (n == 1) return;
	v.push_back(y);
	if (n == 2) return;
	for (int i = 2; i < n; ++i)
	{
		v.push_back(v[i - 2] + v[i - 1]);
	}
}

int main()
{
	vector<int> v;
	int x = 0;
	int y = 0;
	int n = 0;

	cout << "How many elements do you want?: ";
	cin >> n;
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	

	fibonacci(x, y, v, n);

	string s = "Fibonacci numbers: ";
	print(s,v);

	system("pause");
}

