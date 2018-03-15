#include "std_lib_facilities.h"

vector<string>name;
vector<double>age;
//str297

void enter_name_and_age()
{
	string a;
	int n;
	//cout << "how many names do you want? \n";
	//cin >> n;

	cout << "Enter names(write ';' when you finish): \n" << endl;
	while (cin >> a && a != ";")
	{
		for (int i = 0; i<name.size(); ++i) 
		{
			if (a == name[i]) error("the same name");
		}
		name.push_back(a);
	}
	for (int i = 0; i < name.size(); ++i)
	{
		cout << "Age of " << name[i] << ": ";
		double y;
		cin >> y;
		age.push_back(y);
	}
}

void print(vector<string>name, vector<double>age)
{
	if (name.size() != age.size())
	{
		error("print: vectors must be same size");
	}
	for (int i = 0; i < name.size(); ++i)
	{
		cout << '(' << name[i] << ',' << age[i] << ")\n";
	}
}

int index(const vector<string> vec, const string s)
{
	for (int i = 0; i<vec.size(); ++i) 
	{
		if (vec[i] == s)
			return i;
	}
	error("name not found");
}

int main()
{
	enter_name_and_age();
	cout << "Enter like this: \n";
	print(name, age);
	vector<string> name_orig = name;
	vector<double> age_orig = age;
	sort(name.begin(), name.end());
	for (int i = 0; i<name.size(); ++i)
		age[i] = age_orig[index(name_orig, name[i])];

	cout << "\n";
	cout << "sort:\n";
	print(name, age);

	//print();

	system("pause");
}