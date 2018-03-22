#include "std_lib_facilities.h";
#include <fstream>

bool whitespace(char ch)
{
	return (ch == ' '); 
}


int main()
{
	ifstream a;
	a.open("text.txt");
	if (!a) error("can not open file");
	int s=0; 
	int n=0;
	int d = 0;
	char c;
	string xs;
	while (a >> c)
	{
		if (isdigit(c)) // jesli cyfra != 0
		{
			a.unget();
			if (a >> n)
			{
				if (a.eof() || a.get(c) && whitespace(c))
				{
					++d;
					s += n;
					cout << n << endl;
				}
				else
				{
					a.unget();
					a >> xs;

				}
			}
			else error("can not read ");
		}
		else
			a.unget();
		a >> xs;
	}
	cout << "sum from file: " << s << endl;


	system("pause");
}