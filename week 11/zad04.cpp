#include "std_lib_facilities.h"
#include<iomanip>
#include<bitset>


using namespace std;

void function1()
{
	int a = 1;
	for (int i = 0; i<sizeof(a) * 8; ++i)
	{
		cout << a << "\n";
		a <<= 1;
	}
}

void function2()
{
	unsigned int b = 1;
	for (int i = 0; i<sizeof(b) * 8; ++i) 
	{
		cout << b << "\n";
		b <<= 1;
	}
}

void print(short unsigned int n)
{
	cout << dec << setw(5) << n << ' ' << hex << setw(4) << n << ' ' << bitset<16>(n) << '\n';
}
void function3()
{
	short unsigned int n = 0xffff;    
	print(n);
	n = 0x0001;   
	print(n);
	n = 0x8000;   
	print(n);
	n = 0x00ff;  
	print(n);
	n = 0xff00;   
	print(n);
	n = 0x5555;   
	print(n);
	n = 0xaaaa;   
	print(n);
}

void function5()
{
	short unsigned int i = 0;

	i = ~0;       
	print(i);
	i = 1;        
	print(i);
	i = 1 << 15;    
	print(i);
	i = (1 | 1 << 1);   
	i |= i << 2;
	i |= i << 4;
	print(i);
	i = ~i;     
	print(i);
	i = 1;
	i |= i << 2;  
	i |= i << 4;
	i |= i << 8;
	print(i);
	i = ~i;     
	print(i);
}

int main()
{
	cout << "\n----------\n";
	function1();
	cout << "\n----------\n";
	function2();
	cout << "\n----------\n";
	function3();
	cout << "\n----------\n";
	function5();
	cout << "\n----------\n";

	system("pause");
}