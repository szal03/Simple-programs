#include "std_lib_facilities.h"
#include <fstream>
#include <math.h>
#include <string>

enum formats
{
	decimal, octal, hexadecimal
};

ostream& operator<<(ostream& os, formats eformats)
{
	switch (eformats)
	{
		case octal:
			return os << "octal\t";
		case decimal:
			return os << "decimal\t";
		case hexadecimal:
			return os << "hexadecimal\t";
			//default
	}
}

void print(int n, formats eformats)
{
	cout << showbase;
	switch (eformats)
	{
	case octal:
		cout << oct << setw(7) << n;
		break;
	case decimal:
		cout << dec << setw(7) << n;
		break;
	case hexadecimal:
		cout << hex << setw(7) << n;
		break;
		//default;
	}
	cout << ' ' << eformats << "\tconverts to " << dec << setw(6) << n << ' ' << decimal << endl;
}


int main()

{
	cout << "write space-separated integers in decimal, octal or hexadecimal notation (use 0, 0x prefixes) and write any letter to finish" << endl;
	int n = 0;
	char c;
	while (cin >> c)
	{
	//	switch (c)
		//{
		//default:
			//break;
		//}
		if (c == '0')
		{
			cin.get(c);
			if (c == 'x')
			{
				cin >> hex >> n;
				print(n, hexadecimal);
			}
			else if (isdigit(c))
			{ 
				cin.unget();
				cin >> oct >> n;
				print(n, octal);
			}
			else
			{
				cin.unget();
				print(0, octal);
			}
		}
		else if (isdigit(c))
		{
			cin.unget();
			cin >> dec >> n;
			print(n, decimal);
		}
		else break; 
	}

	system("pause");
	return 0;
}