#include "std_lib_facilities.h"

template<class Iterator>
Iterator high(Iterator first, Iterator last)
{
	Iterator high = first;
	for (Iterator p = first; p != last; ++p)
		if (*high<*p) high = p;
	return high;
}

double* get_from_jack(int* count);  
vector<double>* get_from_jill();    

void fct()
{
	int jack_count = 0;
	double* jack_data = get_from_jack(&jack_count);
	vector<double>* jill_data = get_from_jill();

	double* jack_high = high(jack_data, jack_data + jack_count);
	vector<double>& v = *jill_data;
	double* jill_high = high(&v[0], &v[0] + v.size());
	cout << "Jill's high " << *jill_high << "; Jack's high " << *jack_high;
	
	delete[] jack_data;
	delete jill_data;
}


vector<double>* get_from_jill()
{
	const int n = 10;

	vector<double>* a1 = new vector<double>(n);

	if (a1)
	{
		for (int i = 0; i < n; i++)
			(*a1)[i] = i;
	}

	return a1;
}


double* get_from_jack(int* count)
{
	if (!count)
		return 0;

	const int n = 10;

	double* b1 = new double[n];

	if (b1)
	{
		*count = n;

		for (int i = 0; i < n; i++)
		{
			b1[i] = i;
		}
	}

	return b;
}

int main()
{
	fct();
	system("pause");
}


