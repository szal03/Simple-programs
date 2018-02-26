#include "std_lib_facilities.h"

int main()
{
	string operation;
	double val1{ 0 }, val2{ 0 };
	cin >> operation >> val1 >> val2;
	if (operation == "+" || operation == "plus")
	{
		cout << val1 + val2 << "\n";
	}
	if (operation == "-" || operation == "minus")
	{
		cout << val1 - val2 << "\n";
	}
	if (operation == "*" || operation == "mul")
	{
		cout << val1*val2 << "\n";
	}
	if (operation == "/" || operation == "div")
	{
		cout << val1 / val2 << "\n";
	}



	cout << "end\n";

	system("pause");
}