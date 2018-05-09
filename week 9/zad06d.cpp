#include "std_lib_facilities.h"
#include<map>
#include<numeric>

double weighted_value(const pair<string, double>& a,
	const pair<string, double>& b)
{
	return a.second * b.second;
}

int main()
{
	map<string, double> a_price;

	a_price["ABA"] = 100.00;
	a_price["BCB"] = 99.00;
	a_price["CDC"] = 88.00;
	a_price["DED"] = 77.00;
	a_price["EFE"] = 66.00;
	a_price["FGF"] = 55.00;

	map<string, double> a_weight;  
	a_weight.insert(make_pair("ABA", 9.11));
	a_weight.insert(make_pair("BCB", 7.27));
	a_weight.insert(make_pair("CDC", 6.36));
	a_weight.insert(make_pair("DED", 5.45));
	a_weight.insert(make_pair("EFE", 8.95));
	a_weight.insert(make_pair("FGF", 3.77));

	map<string, string> a_name;    
	a_name["ABA"] = "Ford";
	a_name["BCB"] = "Hebe";
	a_name["CDC"] = "Skoda";
	a_name["DED"] = "Sony";
	a_name["EFE"] = "LG";
	a_name["FGF"] = "Fender";

	typedef map<string, double>::const_iterator Dow_iterator;


	for (Dow_iterator p = a_price.begin(); p != a_price.end(); ++p) {
		const string& symbol = p->first;   
		cout << symbol << '\t' << p->second << '\t' << a_name[symbol] << '\n';
	}

	
	double dji_index =
		inner_product(a_price.begin(), a_price.end(),   
			a_weight.begin(),     
			0.0,                    
			plus<double>(),         
			weighted_value);        

	cout << "index: " << dji_index << "\n";




	system("pause");
}
