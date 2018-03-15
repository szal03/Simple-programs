#include "std_lib_facilities.h"

using namespace std;

vector<int> v1;
vector<int> v2;

void reverse1(vector<int>w)
{
	vector<int>vec;
	int a;

	for (int i = w.size() - 1; i >= 0; i--) 
	{
		a = w[i];
		vec.push_back(a);
	}
	for (int j = 0; j < vec.size(); j++)
	{
		cout << vec[j] << " ";
	}
}

void reverse2(vector<int>w)
{
	for (int i = 0; i < w.size() / 2; ++i)
	{
		swap(w[i], w[w.size() - 1 - i]);
	}
	for (int j = 0; j < w.size(); j++)
	{
		cout << w[j] << " ";
	}
}


int main()
{
	vector<int>w;
	int n;
	cout << "write size of vector: \n";
	cin >> n;
	for (int i = 0; i <= n; ++i)
	{
		int m;
		cin >> m;
		w.push_back(m);
	}

	cout << "function 1: \n";
	reverse1(w);
	cout << "\n";
	cout << "function 2: \n";
	reverse2(w);

	system("pause");
}