#include "std_lib_facilities.h"

using namespace std;


void array_function(const int a1[], int n)
{
	cout << "Array1: " << n << "\n";
}

void vector_function(const vector<int>& vec)
{
	cout << "Vetor: " << vec.size() << "\n";
}

void list_function(const list<int>& list1)
{
	cout << "List: " << list1.size() << "\n";
}

int main()
{
	int a1[] = { 1, 2, 3, 4, 5 };
	array_function(a1, sizeof(a1) / sizeof(*a1));

	cout << "\n";
	vector<int> v;
	for (int i = 1; i < 6; ++i) { v.push_back(i); }
	vector_function(v);

	cout << "\n";
	list<int> list1;
	for (int i = 1; i < 6; ++i) { list1.push_back(i); }
	list_function(list1);

	system("pause");
}
