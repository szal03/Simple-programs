#include "std_lib_facilities.h"
//z ksiazki
using namespace std;

template<class T> void print(T i)
{
	cout << i << "\n";
}
void print(char i) 
{ 
	cout << int(i) << "\n";
}
void print(signed char i) 
{
	cout << int(i) << "\n"; 
}

void print(unsigned char i)
{
	cout << int(i) << "\n";
}

int main()
{
	int si = 128;           
	char c = si;            
	unsigned char uc = si; 
	signed char sc = si;    

	print(si);
	print(c);
	print(uc);
	print(sc);

	cout << '\n';

	system("pause");
}