#include"std_lib_facilities.h"
#include<iomanip>
#include<bitset>

using namespace std;

int main()
{
	int n;
	//int a;

	cout << "enter ints: \n";
		while (cin >> n)
		{
			cout << dec << n << " = " << hex << "0x" << setw(8) << setfill('0') << n << " = " << bitset<8 * sizeof(int)>(n) << '\n';
		}


	system("pause");
}