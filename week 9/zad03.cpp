#include "std_lib_facilities.h"

using namespace std;

template<class Iter>
void print1(Iter first, Iter last)
{
	cout << "{";
	while (first != last)
	{
		cout << " " << *first;
		++first;
	}
	cout << " }\n";
}

void list_copy(const list<int>& list1)
{
	vector<double> vec;
	list<int>::const_iterator list_iter = list1.begin();
	while (list_iter != list1.end())
	{
		vec.push_back(*list_iter);
		++list_iter;
	}

	cout << "List: ";
	cout<< list1.size() << "\n";
	cout << "Vector: ";
	cout<< vec.size() << "\n";
	cout << "Numbers: ";

	print1(list1.begin(), list1.end());

	cout << "Vector: ";
	print1(vec.begin(), vec.end());

	vector<double> s_vec = vec;

	sort(s_vec.begin(), s_vec.end());

	cout << "Sort: ";

	print1(s_vec.begin(), s_vec.end());
}

int main()
{

	list<int> list_1;
	for (int i = 0; i < 10; ++i)
	{
		list_1.push_back(randint(0, 150));
	}

	list_copy(list_1);
	cout << "\n";


	system("pause");
}