#include "std_lib_facilities.hpp"

using namespace std;

class Int
{
	int a;
public:
	Int(int b) : a(b) { }
	int get() const { return a; }
};

Int operator+(const Int& a1, const Int& a2)
{
	return  Int(a1.get() + a2.get());
}

Int operator-(const Int& a1, const Int& a2)
{
	return  Int(a1.get() - a2.get());
}

Int operator*(const Int& a1, const Int& a2)
{
	return  Int(a1.get() * a2.get());
}

Int operator/(const Int& a1, const Int& a2)
{
	return  Int(a1.get() / a2.get());
}
ostream& operator<<(ostream& o, const Int& b)
{
	o << b.get();
	return o;
}


int main()
{
	Int i = 10;
	Int n = 2;
	
	
	cout << "10-2= " << i - n << "\n";
	cout << "10+2= " << i + n << "\n";
	cout << "10*2= " << i * n << "\n";
	cout << "10/2= " << i / n << "\n";



	system("pause");
}