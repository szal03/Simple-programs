#include "std_lib_facilities.h"
void copy1(int* a, int* b, int* c)
{
	while (a != b) 
	{
		*c = *a;
		++a;
		++c;
	}
}
int main()
{
	const int size = 10;
	int arr1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int* x = arr1;

	cout << "Array1: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr1[i] << ' ';
	}
	cout << endl;

	int arr2[size];
	int* y = arr2;
	copy1(x, x + size, y);
	cout << "\n";
	cout << "Array2: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr2[i] << ' ';
	}
	cout << endl;
	cout << "\n";
	system("pause");
}
