#include "std_lib_facilities.h"

template<class InputIterator, class Predicate>
int count_if_1(InputIterator input1, InputIterator input2, const Predicate& pc)
{
	int count = 0;
	while (input1 != input2)
	{
		if (pc(*input1)) count++;
		input1++;
	}
	return count;
}
//
template<class T>
class lower
{
	T value;
public:
	lower(T l) :value(l) { }
	bool operator()(const T& l) const
	{
		return l < value;
	}
};

template<class T>
class bigger {
	T value;
public:
	bigger(T b) :value(b) { }
	bool operator()(const T& b) const
	{
		return b > value;
	}
};

bool diff(int n)
{
	return n % 2 != 0;
}

int main()
{
	
	vector<int> vec;
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(randint(50));
	}
	cout << "Vector" << endl;

	for (vector<int>::iterator q = vec.begin(); q != vec.end(); q++)
	{
		cout << *q << endl;
	}
	cout << "\n";
	cout << "write a value";
	cout << "\n";

	int val;

	while (cin >> val)
	{
		int c = count_if_1(vec.begin(), vec.end(), lower<int>(val));
		cout << c << "  is less than " << val << " in vector.\n";
		cout<< "next: ";
	}
	while (cin >> val)
	{
		int c = count_if_1(vec.begin(), vec.end(), bigger<int>(val));
		cout << c << "  is greater than " << val << " in vector.\n";
		cout<< "next: ";
	}
	int c = count_if_1(vec.begin(), vec.end(), diff);
	cout << c << " different values in vector.\n";

	system("pause");
}






