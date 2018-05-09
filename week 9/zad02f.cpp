#include "std_lib_facilities.h"

template<class Iter> void advance(Iter& a, int i)
{
	if (i > 0) 
	{
		while ( i> 0) 
		{ 
			a++; i--;
		}
	}
	else if (i < 0) 
	{
		while (i < 0) 
		{ 
			a--; i++;
		}
	}
}
int main()
{
	system("pause");
}
