
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.hpp"    // get access to our window library
#include "Graph.hpp"            // get access to our graphics library facilities

//------------------------------------------------------------------------------
class Star : public Graph_lib::Shape
{
public:
	Star(Point p, int r, int n);
	void set_color(Graph_lib::Color c);
	void set_fill_color(Graph_lib::Color c);
	void draw_lines() const;
private:
	Graph_lib::Closed_polyline outline;
};

void Star::set_fill_color(Graph_lib::Color c)
{
	outline.set_fill_color(c);

}
void Star::set_color(Graph_lib::Color c)
{
	outline.set_color(c);

}
void Star::draw_lines() const
{
	outline.draw_lines();

}

Star::Star(Point p, int r, int n)
{
	if (r <= 0) error("Invalid radius.");
	if (n < 3) error("Invalid number of points.");
	for (int k = 0; k < n; ++k)
	{
		outline.add(Point(int(p.x + r * cos(k*6.28 / n) / ((2 * n + 6) / n)),
			int(p.y + r * sin(k*6.28 / n) / ((2 * n + 6) / n))));
		outline.add(Point(int(p.x + r * cos((k + 0.5)*6.28 / n)), int(p.y + r * sin((k + 0.5)*6.28 / n))));
	}
}

int main()
{
	using namespace Graph_lib;  

	Point tl(100, 100);          

	Simple_window win(tl, 600, 400, "Canvas");   

	Star a({ 300,100 }, 30, 3);
	Star b({ 250,450 }, 50, 5);
	Star c({ 200,100 }, 100, 3);
	Star d({ 650,300 }, 60, 5);
	Star e({ 300,450 }, 20, 5);
	Star f({ 500,250 }, 70, 4);
	a.set_color(Graph_lib::Color::red);
	b.set_color(Graph_lib::Color::red);
	c.set_color(Graph_lib::Color::red);
	e.set_color(Graph_lib::Color::red);
	f.set_color(Graph_lib::Color::red);
	a.set_fill_color(Graph_lib::Color::red);
	b.set_fill_color(Graph_lib::Color::red);
	c.set_fill_color(Graph_lib::Color::red);
	d.set_fill_color(Graph_lib::Color::red);
	f.set_fill_color(Graph_lib::Color::red);
	win.attach(a);
	win.attach(b);
	win.attach(c);
	win.attach(d);
	win.attach(e);
	win.attach(f);


	win.wait_for_button();
}

//------------------------------------------------------------------------------
