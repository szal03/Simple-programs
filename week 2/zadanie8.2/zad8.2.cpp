#include "std_lib_facilities.hpp"

int main()
{
	vector<int> vals;
	int i = 0;
	int n = 0;

	cout << "Please enter the number of values you want to sum:\n";
	cin >> n;
	cout << "Please enter some integers (press '|' to stop)\n";
	while (cin >> i)
		vals.push_back(i);

	if (vals.size() < n) 
	{ 
		simple_error("Error");
	}

	int sum = 0;
	cout << "The sum of the first ";
	if (n > 1) cout << n << ' ';
	cout << " numbers (";
	for (int i = 0; i<n; i++) 
	{
		sum += vals[i];
		cout << vals[i] << ' ';
	}
	cout << ") is " << sum << ".\n";


	system("pause");
}