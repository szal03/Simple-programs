#include "Matrix.h"
#include "MatrixIO.h"
#include "std_lib_facilities.h"

using namespace std;
using namespace Numeric_lib;

namespace Numeric_lib {;
void triple1(int& n)
{
	n *= 3;
}
int triple2(int n)
{
	return 3 * n;
}
int triple(int& n)
{
	n *= 3;
	return n;
}
}   
int main()
{
	int array1[] = { 1, 2, 3, 4, 5 };
	Matrix<int> matrix1(array1);
	cout << "matrix1: \n";
	cout<< matrix1 << '\n';

	matrix1.apply(triple1);
	cout << "matrix1 after :\n";
	cout<< matrix1 << '\n';

	Matrix<int> matrix2 = apply(triple2, matrix1);
	cout << "matrix1 after matrix2  :\n";
	cout<< matrix1 << '\n';
	cout << "matrix2:\n";
	cout<< matrix2 << '\n';

	matrix2.apply(triple);
	cout << "matrix2 after matrix2 :\n";
	cout<< matrix2 << '\n';

	Matrix<int> matrix3 = apply(triple, matrix2);
	cout << "matrix2 after matrix3 :\n";
	cout<< matrix2 << '\n';
	cout << "matrix3:\n";
	cout<< matrix3 << '\n';

	system("pause");
}