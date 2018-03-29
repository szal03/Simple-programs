
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.hpp"    // get access to our window library
#include "Graph.hpp" // get access to our graphics library facilities
#include <math.h>
#include "Point.hpp"

//------------------------------------------------------------------------------


double sgn(double d)  
{
	if (d>0) return 1;
	else if (d<0) return -1;
	else return 0;
}

int main()
{
	using namespace Graph_lib;   

	Point tl(100, 100);           

	Simple_window win(tl, 600, 400, "1");    
	 
	int a = 1;
	int b = 1;
	double m = 0.50;
	double n = 0.50;
	int N = 25;
	const double pi = 3.14159;

	a = 100 * a;
	b = 100 * b;

	vector<Point> points;

	for (double theta = 0; theta < 2 * pi; theta += 2 * pi / N)
	{
		double x = pow(abs(cos(theta)), 2 / m) * a * sgn(cos(theta)) + a + 10; 
		double y = pow(abs(sin(theta)), 2 / n) * b * sgn(sin(theta)) + b + 10;
		points.push_back(Point(x, y));
	}

	Graph_lib::Open_polyline line1;

	for (int i = 0; i < points.size() / 4; ++i)
	{
		line1.add(points[i]);
		for (int j = i; j < points.size(); ++j)
		{
			if (i != j) 
			{
				line1.add(points[j]);
				line1.add(points[i]);
			}
		}
	}
	line1.set_color(Color::blue);
	win.attach(line1);

	Graph_lib::Open_polyline line2;
	for (int i = points.size() / 4; i < points.size() / 2; ++i)
	{
		line2.add(points[i]);
		for (int j = i; j < points.size(); ++j)
		{
			if (i != j) 
			{
				line2.add(points[j]);
				line2.add(points[i]);
			}
		}
	}
	line2.set_color(Color::dark_blue);
	win.attach(line2);

	Graph_lib::Open_polyline line3;
	for (int i = points.size() / 2; i < 3 * points.size() / 4; ++i)
	{
		line3.add(points[i]);
		for (int j = i; j < points.size(); ++j)
		{
			if (i != j) 
			{
				line3.add(points[j]);
				line3.add(points[i]);
			}
		}
	}
	line3.set_color(Color::dark_green);
	win.attach(line3);

	Graph_lib::Open_polyline line4;
	for (int i = 3 * points.size() / 4; i < points.size(); ++i)
	{
		line4.add(points[i]);
		for (int j = i; j < points.size(); ++j)
		{
			if (i != j) 
			{
				line4.add(points[j]);
				line4.add(points[i]);
			}
		}
	}
	line4.set_color(Color::dark_red);
	win.attach(line4);


	win.wait_for_button();       
}
