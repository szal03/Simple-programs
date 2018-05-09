#include "std_lib_facilities.h"

template<class ex20>
void insert(int a, ex20& contain)
{
	typename ex20::iterator n = contain.begin();
	while (n != contain.end() && *n <= a)
	{
		n++;
	}
	contain.insert(n, a);
}

template<class ex20>
double time(int elements, ex20& contain)
{
	clock_t t = clock();
	if (t == clock_t(-1))
	{
		error("didn't work");
	}
	for (int i = 0; i < elements; i++)
	{
		insert(randint(elements), contain);
	}

	clock_t tt = clock();
	if (tt == clock_t(-1))
	{
		error("clock overflow");
	}
	return double(tt - t) / CLOCKS_PER_SEC;
}

int main()
{
	const int max = 800;
	const int init = 500;
	const int increase = 25;
	const int repetition = 10;

	vector<double> vect_t;
	vector<double> list_t;
	vector<int> size;

	for (int i = init; i <= max; i += increase)
	{
		size.push_back(i);
		
		double vec_t = 0;
		for (int i = 0; i < repetition; i++)
		{
			vector<int> wiktor;
			vec_t += time(i, wiktor);
		}
		vect_t.push_back(vec_t / repetition);

		

		double list_t1 = 0;
		for (int i = 0; i < repetition; i++)
		{
			list<int> li;
			list_t1 += time(i, li);
		}
		list_t.push_back(list_t1 / repetition);
	}

	cout << "Size\tvector [s]  list [s]  list/vec " << endl;

	for (int i = 0; i < vect_t.size(); i++)
	{
		cout << right << setw(6) << size[i] << "  "
			<< fixed << setprecision(3)
			<< left << setw(9) << vect_t[i] << "  "
			<< setw(12) << list_t[i]
			<< list_t[i] / vect_t[i] << endl;
	}

	system("pause");
}