#include "std_lib_facilities.hpp"

template<class T, class U>

typename common_type<T, U>::type function(const vector<T>& vt, const vector<U>& vu)
{
	typename std::common_type<T, U>::type sum = 0;

	for (int i = 0; i<vt.size(); i++)
	{
		sum += vt[i] * vu[i];
	}
	return sum;
}

int main()
{
	vector<int> a;

	for (int i = 0; i < 5; ++i)
	{
		a.push_back(i);
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << " " << a[i];
	}

	cout << endl;

	vector<double> b;

	for (int i = 0; i < 6; ++i)
	{
		b.push_back(i*1.6);
	}
	for (int i = 0; i < 6; ++i)
	{
		cout << " " << function(a, b);
	}
	cout << "\n";

	

	system("pause");
}