#include "std_lib_facilities.h"
#include "Matrix.h"
#include "MatrixIO.h"
#include <math.h>
#include <complex>

using namespace std;
using namespace Numeric_lib;

void sqrt_x()
{
	int i;
	cout << "\n write ints - char to exit : ";
	while (cin >> i)
	{
		double d = sqrt(i);
		if (i == 0)
			cout << "no square root\n";
		else
			cout << "sqrt(" << i << ") = " << d << '\n';
	}
}
void put_into_matrix()
{
	cin.clear();
	cin.ignore();
	cout << "\n write 10 floating point values: ";
	Matrix<double> m(10);
	double d;
	for (int i = 0; i<m.size(); ++i)
	{
		cin >> d;
		if (!cin)
		{
			cout<<"can not reading from cin";
		}
		m[i] = d;
	}
	cout << "Matrix:\n" << m << '\n';
}

void c_matrix()
{
	cout << "\n Multiplication table"; 
	cout << "\n Enter n : \n";
	int n;
	cin >> n;
	cout << "Enter m: ";
	int m;
	cin >> m;
	Matrix<int, 2> mtable(n, m);
	for (Index i = 0; i<mtable.dim1(); ++i) 
	{
		for (Index j = 0; j<mtable.dim2(); ++j)
		{
			mtable(i, j) = (i + 1)*(j + 1);
			cout << setw(5) << mtable(i, j);
		}
		cout << '\n';
	}

}

void complex_to_matrix()
{
	Matrix<complex<double>> m(10);
	cout << "\n write 10 complex numbers (Re,Im): ";
	complex<double> c;
	for (int i = 0; i<10; ++i) 
	{
		cin >> c;
		if (!cin)
		{
			cout << "can not reading from cin";
		}
		m[i] = c;
	}
	complex<double> sum;
	for (Index i = 0; i<m.size(); ++i)
		sum += m[i];
	cout << "Sum: " << sum << '\n';
}


void ints_to_matrix()
{
	Matrix<int, 2> m(2, 3);
	cout << "\n write six ints: ";
	int n;
	for (int i = 0; i<m.dim1(); ++i)
		for (int j = 0; j<m.dim2(); ++j) 
		{
			cin >> n;
			m(i, j) = n;
		}
	cout << "Matrix:\n" << m << '\n';
}


int main()
{
	int i;
	double du;
	char ch;
	short int si;
	long int li;
	float f;
	int* is;
	double* eds;
	

	cout << "size of int: " << sizeof(int)<<"\n";
	cout << "size of double " << sizeof(double) << "\n";
	cout << "size of char: " << sizeof(char) << "\n";
	cout << "size of short int " << sizeof(short int) << "\n";
	cout << "size of long int: " << sizeof(long int) << "\n";
	cout << "size of float: " << sizeof(float) << "\n";
	cout << "size of int* :" << sizeof(int*) << "\n";
	cout << "size of double*: " << sizeof(double*) << "\n";
	//
	Matrix<int>a(10);
	Matrix<int>b(100);
	Matrix<double>c(10);
	Matrix<int, 2>d(10, 10);
	Matrix<int, 3>e(10, 10, 10);

	cout << "matrix size a: " << sizeof(a)<<"\n";
	cout << "matrix size b: " << sizeof(b) << "\n";
	cout << "matrix size c: " << sizeof(c) << "\n";
	cout << "matrix size d: " << sizeof(d) << "\n";
	cout << "matrix size e: " << sizeof(e) << "\n";

	//
	cout << "size: a " << size(a) << endl;
	cout << "size: b " << size(b) << endl;
	cout << "size: c " << size(c) << endl;
	cout << "size: d " << size(d) << endl;
	cout << "size: e " << size(e) << endl;

	sqrt_x();
	put_into_matrix();
	c_matrix();
	complex_to_matrix();
	ints_to_matrix();
	
	system("pause");
}