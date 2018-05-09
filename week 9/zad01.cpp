#include "std_lib_facilities.h"

void show_list(list <int> g)
{
	list <int> ::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout <<"\n" << *it;
}

template<class Iter1, class Iter2>
Iter2 copying(Iter1 f1, Iter1 e1, Iter2 f2)
{
	while (f1 != e1)
	{
		*f2 = *f1;
		++f1;
		++f2;
	}
	return f2;
}

void print_vector(vector<int> v)
{
	for (int i : v)
	{
		cout << i << endl;
	}
}

int main()
{
	array<int, 10> a = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int>v = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int>l = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int aray_copied[10]; 
	for (int i = 0; i < 10; i++)
	{
		aray_copied[i] = a[i];
		cout << a[i];
	}
	cout << "\n";

	vector<int>v_copy = v; 
	list<int>l_copy = l; 

	for (int i = 0; i < 10; i++) // +2
	{
		a[i] = a[i] + 2;
		cout << a[i];
	}
	cout << "\n";
	
	for (int i = 0; i < 10; i++) //+3
	{
		v[i] = v[i] + 3;
	}
	print_vector(v);

	for (list<int>::iterator li = l.begin(); li != l.end(); li++)
	{
		*li += 5;
	}
	show_list(l);
	cout << "\n";
	
	vector<int>::iterator v1 = copying(a.begin(), a.end(), v.begin());
	array<int, 10>::iterator a1 = copying(l.begin(), l.end(), a.begin());


	vector<int>::iterator t;
	t = find(v.begin(), v.end(), 3);
	t = t - 1;
	if (t != v.end())
	{
		cout << "Index: " << t - v.begin() << endl;
	}
	list<int>::iterator l1;

	l1 = find(l.begin(), l.end(), 27);

	if (l1 != l.end())
	{
		int index = 0;
		for (list<int>::iterator itr = l.begin(); itr != l1; ++itr)
		{
			++index;
			cout << "Index: " << index << endl;
		}
	}
	else
	{
		cout << "There is no 27 in list " << endl;
	}

	system("pause");
}