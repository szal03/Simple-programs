#include "Simple_window.hpp" 
#include "Graph.hpp"            
#include "Point.hpp"
#include "std_lib_facilities.hpp"

using namespace Graph_lib;

struct Immobile_circle : Circle
{
	Immobile_circle(Point p, int r) : Circle{ p, r } { }

	void move(int dx, int dy) { }
};

struct Striped_rectangle : Rectangle
{
	Striped_rectangle(Point p, int w, int h, int s);

	void draw_lines() const;

	Lines l;
	int width = 5; 
};


Striped_rectangle::Striped_rectangle(Point p, int w, int h, int s) : Rectangle{ p, w, h }, width{}
{
	for (int i = p.y + s; i < p.y + h; i += s)
		l.add(Point{ p.x, i }, Point{ p.x + w - 1, i });
}

void Striped_rectangle::draw_lines() const
{
	l.draw();
	Rectangle::draw_lines();
}


int main()
{

	Point tl(100, 100);
	Simple_window win(tl, 800, 600, "Window");

	//Immobile_circle
	Immobile_circle a{ Point{ 200, 300 }, 50 };
	a.set_color(Color::dark_red);
	a.move(500, 500); 
	win.attach(a);

	//Striped_rectangle		   
	Striped_rectangle b{ Point{ 400, 200 }, 200, 150, 5 };
	b.set_color(Color::dark_yellow);
	
	win.attach(b);
	win.wait_for_button();

	system("pause");
}
