#include "std_lib_facilities.hpp"

int main()
{
	double distance=0;
	vector<double>way;
	double smallest_distance=0;
	double greatest_distance=0;
	double total=0;
	double mean=0;

	cout << "write distance between cities: \n";

	while (cin >> distance)
	{
		if (distance > 0)
		{
			way.push_back(distance);
		}
	}
	if (way.size() == 0)
	{
		simple_error("distance between two cities can not be equel 0! ");
	}
		smallest_distance = way[0];
		greatest_distance = way[0];

	for (int i = 0; i < way.size(); ++i)
	{
			total += way[i];
			if (way[i]<smallest_distance)
				smallest_distance = way[i];
			if (way[i]>greatest_distance)
				greatest_distance = way[i];
	}

		mean = total / way.size();
		
		cout << "the smallest distance: " << smallest_distance << endl;
		cout << "the geatest distance: " << greatest_distance << endl;
		cout << "total: " << total << endl;
		cout << "mean: " << mean << endl;


	
	system("pause");
}