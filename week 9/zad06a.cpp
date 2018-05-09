#include "std_lib_facilities.h"

template<class In, class T>
In first_find(In first, In last, const T& val)
{
	while (first != last && *first != val) ++first;
	return first;
}

template<class In, class T>
In second_find(In first, In last, const T& val)
{
	for (In q = first; q != last; ++q)
		if (*q == val) return q;
	return last;
}

int main()
{
	vector<int> vec1;
	for (int i = 0; i < 50; i++)
	{
		vec1.push_back(randint(100));
		cout << vec1[i] << ' ';
	}

	cout << "\n";

	int n = randint(vec1.size());
	cout << "number: " << vec1[n] <<"\n";

	vector<int>::iterator iter_vec1 = first_find(vec1.begin(), vec1.end(), vec1[n]);

	vector<int>::iterator  iter2_vec1 = second_find(vec1.begin(), vec1.end(), vec1[n]);


	while (iter_vec1 != vec1.end())
	{
		cout << *iter_vec1 << "-" << *iter2_vec1 << "\n";
		iter_vec1++;
		iter2_vec1++;
	}



	system("pause");
}
