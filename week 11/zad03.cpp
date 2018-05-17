#include "Matrix.h"
#include "MatrixIO.h"
#include "std_lib_facilities.h"

using namespace std;
using namespace Numeric_lib;

namespace Numeric_lib {
	;

	struct triple1 
	{
		void operator()(int& i) { i *= 3; }
	};

	struct triple2
	{
		int operator()(int i) { return i * 3; }
	};

	struct triple3
	{
		int operator()(int& i) { i *= 3; return i; }
	};

}
int main()
{
	int array1[] = { 1, 2, 3, 4, 5 };
	Matrix<int> matrix1(array1);
	cout << "matrix1: \n";
	cout<< matrix1 << '\n';

	matrix1.apply(triple1());
	cout << "matrix1 after: \n";
	cout<< matrix1 << '\n';

	Matrix<int> matrix2 = apply(triple2(), matrix1);
	cout << "matrix1 after matrix2: \n";
	cout<< matrix1 << '\n';
	cout << "matrix2: \n";
	cout<< matrix2 << '\n';

	matrix2.apply(triple3());
	cout << "matrix2 after matrix2: \n";
	cout<< matrix2 << '\n';

	Matrix<int> matrix3 = apply(triple3(), matrix2);
	cout << "matrix2 after matrix3 :\n";
	cout<< matrix2 << '\n';
	cout << "matrix3: \n";
	cout<< matrix3 << '\n';

	system("pause");
}