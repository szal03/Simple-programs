#include "std_lib_facilities.h"
#include <fstream>

struct Point //pkt1
{
	int x, y;
	Point(int xx, int yy) : x(xx), y(yy) { }
	Point() :x(0), y(0) { }
};

ostream & operator<< (ostream & os, Point z) 
{
	os << z.x << ' ' << z.y << endl;
	return os;
}

int main()
{
	vector<Point>orginal_points;

	for (int i = 0; i < 7; ++i) // pkt2
	{
		Point a;
		cin >> a.x >> a.y;

		if (!cin) error("Logic error when reading the point");
		orginal_points.push_back(a);
	}
	cout << "Point values as originally input\n"; //pkt 3

	ofstream output; //pkt 4

	output.open("mydata.txt");
	if (!output) error("ni mo pliku");

	for (int i = 0; i < 7; ++i)
	{
		cout << orginal_points[i] << endl; // 
		output << orginal_points[i]; 
	}
	output.close();

	// pkt5
	ifstream input;
	Point s_point;
	input.open("mydata.txt");
	if (!input) error("Can not open input");

	vector<Point>processed_points;

	while (input >> s_point.x >> s_point.y)
		processed_points.push_back(s_point);
	for (int i = 0; i < 7; i++)
		cout << processed_points[i];
	
	input.close();
	system("pause");
}

