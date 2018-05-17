#include "std_lib_facilities.h"

using namespace std;

void infinite()
{
	unsigned char max = 160; // very large
	for (signed char i = 0; i<max; ++i) cout << int(i) << '\n';
}

int main()
{
	infinite();

	system("pause");
}