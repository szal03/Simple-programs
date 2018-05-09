#include "std_lib_facilities.h"

void f1(const char z[])
{
	cout << "Length: " << strlen(z) << endl;

	if (strcmp(z, "Hello") == 0)
	{
		cout << "z == Hello" << endl;
	}
	int compare = strcmp(z, "Howdy");

	if (compare == -1)
	{
		cout << "z < Howdy" << endl;
	}
	else if (compare == 0)
	{
		cout << "z == Howdy" << endl;
	}
	else if (compare == 1)
	{
		cout << "z > Howdy" << endl;
	}
	else
	{
		cout << "\nerror\n";
	}

	char x_size[6];
	strcpy_s(x_size, z);
	cout << "\n";
}

template<class T>
int compare_values(const T& a, const string& b)
{
	int i = 0;
	for (typename T::const_iterator q = a.begin(); q != a.end() && i<b.size(); q++)
	{
		if (*q < b[i])
		{
			return -1;
		}
		if (*q > b[i])
		{
			return 1;
		}
		i++;
	}
	if (a.size() < b.size())
	{
		return -1;
	}

	if (a.size() > b.size())
	{
		return 1;
	}
	return 0;
	cout << "\n";
}

void vectorf(const vector<char>& v)
{
	cout << "Vector: " << v.size() << endl;

	if (compare_values(v, "Hello") == 0)
	{
		cout << "v == Hello" << endl;
	}
	int compare = compare_values(v, "Howdy");

	if (compare == -1)
	{
		cout << "v < Howdy" << endl;
	}
	else if (compare == 0)
	{
		cout << "v == Howdy" << endl;
	}
	else if (compare == 1)
	{
		cout << "v > Howdy" << endl;
	}
	else
	{
		cout << "\nerror\n";
	}

	vector<char> vec_comp = v;
	cout << "\n";
}

void listf(const list<char>& l)
{
	cout << "List: " << l.size() << endl;

	if (compare_values(l, "Hello") == 0)
	{
		cout << "l == Hello" << endl;
	}

	int compare = compare_values(l, "Howdy");
	if (compare == -1)
	{
		cout << "l < Howdy" << endl;
	}
	else if (compare == 0)
	{
		cout << "l == Howdy" << endl;
	}
	else if (compare == 1)
	{
		cout << "l > Howdy" << endl;
	}
	else
	{
		cout << "\nerror\n";
	}

	list<char> list_comp = l;
	cout << "\n";
}

void stringf(const string& s)
{
	cout << "String: " << s.size() << endl;
	if (s == "Hello")
	{
		cout << "s == Hello" << endl;
	}
	if (s < "Howdy")
	{
		cout << "s < Howdy" << endl;
	}
	string string_comp = s;
	cout << "\n";
}


int main()
{
	char arr1[] = "Hello";
	f1(arr1);
	cout << endl;

	string str = "Hello";
	stringf(str);
	cout << endl;


	vector<char> vec;
	vec.push_back('H');
	vec.push_back('e');
	vec.push_back('l');
	vec.push_back('l');
	vec.push_back('o');
	vectorf(vec);
	cout << endl;


	list<char> list1;
	list1.push_back('H');
	list1.push_back('e');
	list1.push_back('l');
	list1.push_back('l');
	list1.push_back('o');
	listf(list1);
	cout << endl;


	system("pause");
}
