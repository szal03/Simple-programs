#include "std_lib_facilities.h"
#include<numeric>

struct Record
{
	Record(double a, int b) : unit_price(a), units(b) { }
	double unit_price;
	int units;  
};

double price(double v, const Record& r)
{
	return v + r.unit_price * r.units;  
}

void f(const vector<Record>& vec)
{
	double all = accumulate(vec.begin(), vec.end(), 0.0, price);
	cout << "value: ";
	cout<< all << "\n";
}

int main()
{

	Record r1 = Record(45.7, 4000);
	Record r2 = Record(75.9, 32);
	Record r3 = Record(100, 60);
	Record r4 = Record(3.99, 89);
	Record r5 = Record(5.65, 43);

	vector<Record> vec;

	vec.push_back(r1);
	vec.push_back(r2);
	vec.push_back(r3);
	vec.push_back(r4);
	vec.push_back(r5);
	f(vec);


	system("pause");
}
