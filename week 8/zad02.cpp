#include "std_lib_facilities.hpp"

vector<int>gv = { 1,2,4,8,16,32,64,128,256,512 };


void f(vector<int>a, int arg)
{
	vector<int>lv = a;

	
	for (int i = 0; i < 10; i++)
	{
		cout << lv[i];
		cout << "\n";

	}
	vector<int> lv2 = lv;

	
}

int main()
{

	f(gv, 10);
	cout << "\n";
	
	vector<int>vv(gv.size());
	vv[0] = 1;
	for (int i = 1; i < 10; i++)
	{
		vv[i] = vv[i - 1] * (i + 1);
	}

	f(vv, 10);
	cout << "\n";


	system("pause");
}