#include "Simple_window.hpp"   
#include "Graph.hpp"            
#include "Point.hpp"



double one(double x)
{
	return 1;
}


double slope(double x)
{
	return x / 2;
}

double square(double x)
{
	return x * x;
}

double sloping_cos(double x)
{
	return cos(x) + slope(x);
}

int main()
{
	using namespace Graph_lib;
	Point tl(100, 100);
	Simple_window win(tl, 600, 600, "Function graphs");
	Axis x{ Axis::x,Point{ 100 ,300 }, 400, 20, "1 == 20pixels" };
	Axis y{ Axis::y,Point{ 300, 500 }, 400, 20, "1 == 20pixels" };
	x.set_color(Color::dark_blue);
	y.set_color(Color::dark_blue);
	win.attach(x);
	win.attach(y);

	
	constexpr int xmax = 600; 
	constexpr int ymax = 400;
	constexpr int x_orig = 300; 
	constexpr int y_orig = 300;
	Point orig{ x_orig,y_orig };
	//  [–10:11]
	int r_min = -10; 
	constexpr int r_max = 11;
	constexpr int n_points = 400; 
	constexpr int x_scale = 20; 
	constexpr int y_scale = 20;
	Function first{ one,-10,11,orig,n_points,20,20 }; 
	win.attach(first);
	Function second{ slope,-10,11,orig,n_points,20,20 };
	win.attach(second);
	Text ts2{ Point{ 100,420 },"x/2" };
	win.attach(ts2);
	Function f3{ square,-10,11,orig,n_points,20,20 };
	win.attach(f3);
	Function f4{ cos,-10,11,orig,n_points,20,20 };
	f4.set_color(Color::cyan);
	win.attach(f4);
	Function f5{ sloping_cos, -10,11,orig,n_points,20,20 };
	win.attach(f5);



	win.wait_for_button();
}