
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.hpp"    // get access to our window library
#include "Graph.hpp"            // get access to our graphics library facilities

//------------------------------------------------------------------------------

int main()
{
	using namespace Graph_lib;   // our graphics facilities are in Graph_lib

	Point tl(100, 100);           // to become top left  corner of window

	Simple_window win(tl, 600, 400, "Simple_window");    // make a simple window

	win.wait_for_button();
	Axis xa{ Axis::x, Point{ 10,300 },280,10,"x  axis" };
	win.attach(xa);
	win.set_label("XA");
	win.wait_for_button();

	Axis ya{ Axis::y, Point{ 10,300 },280,10,"y axis" };
	ya.set_color(Color::cyan);
	ya.label.set_color(Color::dark_red);
	win.attach(ya);
	win.set_label("YA");
	win.wait_for_button();

	Function sine{ sin,0,100,Point{ 20,150 },1000,50,50 };
	win.attach(sine);
	win.set_label("sin");
	win.wait_for_button();

	sine.set_color(Color::dark_red);

	Graph_lib::Polygon poly;
	poly.add(Point{ 300,200 });
	poly.add(Point{ 350,100 });
	poly.add(Point{ 400,200 });

	poly.set_color(Color::green);
	poly.set_style(Line_style::dash);
	win.attach(poly);
	win.set_label("poly");
	win.wait_for_button();


	Graph_lib::Rectangle r{ Point{ 200,200 },100,50 };
	win.attach(r);
	win.set_label("Rec");
	win.wait_for_button();

	Closed_polyline poly_rect;
	poly_rect.add(Point{ 100,50 });
	poly_rect.add(Point{ 200,50 });
	poly_rect.add(Point{ 200,100 });
	poly_rect.add(Point{ 100,100 });
	win.attach(poly_rect);

	poly_rect.add(Point{ 50,75 });

	r.set_fill_color(Color::yellow);
	poly.set_style(Line_style(Line_style::dash, 4));
	poly_rect.set_style(Line_style(Line_style::dash, 2));
	poly_rect.set_fill_color(Color::white);
	win.set_label("7");
	win.wait_for_button();

	Text t{ Point{ 150,150 }, "Hello, graphical world!" };
	win.attach(t);
	win.set_label("8");
	win.wait_for_button();
	t.set_font(::Graph_lib::Font::times_bold);
	t.set_font_size(20);
	win.set_label("9");
	win.wait_for_button();

	Image ii{ Point{ 100,50 },"kot-400x200.jpg" };

	win.attach(ii);
	win.set_label("10");
	win.wait_for_button();

	ii.move(100, 200);
	win.set_label("11");
	win.wait_for_button();

	Circle c{ Point{ 100,200 },50 };
	Graph_lib::Ellipse e{ Point{ 100,200 }, 75,25 };
	e.set_color(Color::dark_red);
	Mark m{ Point{ 100,200 },'x' };

	ostringstream oss;
	oss << "screen size: " << x_max() << "*" << y_max()
		<< "; window size: " << win.x_max() << "*" << win.y_max();
	Text sizes{ Point{ 100,20 },oss.str() };

	Image cal{ Point{ 225,225 },"snow.gif" };
	cal.set_mask(Point{ 40,40 }, 200, 150);

	win.attach(c);
	win.attach(m);
	win.attach(e);
	win.attach(sizes);
	win.attach(cal);
	win.set_label("12");
	win.wait_for_button();


	/* Polygon poly;                // make a shape (a polygon)

	poly.add(Point(300,200));    // add a point
	poly.add(Point(350,100));    // add another point
	poly.add(Point(400,200));    // add a third point

	poly.set_color(Color::dark_blue);  // adjust properties of poly

	win.attach (poly);           // connect poly to the window

	win.wait_for_button();  */     // give control to the display engine
}

//------------------------------------------------------------------------------
