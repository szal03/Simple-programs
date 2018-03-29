
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

    Point tl(100,100);           // to become top left  corner of window

    Simple_window win(tl,600,400,"Canvas");    // make a simple window
	win.wait_for_button();  // give control to the display engine
	Graph_lib::Polygon poly;                // make a shape (a polygon)
	//Closed_polyline poly_rect;
    poly.add(Point(300,200));    // add a point
    poly.add(Point(350,100));    // add another point
    poly.add(Point(400,200));    // add a third point 
    poly.set_color(Color::red);  // adjust properties of poly
    win.attach (poly); // connect poly to the window
	Graph_lib::Rectangle r{ Point{ 70,100 }, 100, 50 }; // top left corner, width, height
	r.set_color(Color::blue);
	win.attach(r);

    win.wait_for_button();  // give control to the display engine

	Graph_lib::Rectangle rec{ Point{ 300,70 }, 100, 30 };		 
	rec.set_color(Color::black);
	win.attach(rec);
	Text txt{ Point{ 330,85 },"Howdy!" };
	win.attach(txt);
	
	win.wait_for_button();
	
	Text t{ Point{ 20,300 },"A" };		
	t.set_font(Graph_lib::Font::helvetica_bold);
	t.set_font_size(150);
	t.set_color(Color::blue);
	win.attach(t);

	Text tt{ Point{ 77,300 },"S" };
	tt.set_font(Graph_lib::Font::helvetica_bold);
	tt.set_font_size(150);
	tt.set_color(Color::dark_blue);
	win.attach(tt);
	win.wait_for_button();

	Graph_lib::Rectangle a{ Point{ 230,150 }, 20, 20 };		 // 4
	a.set_color(Color::white);
	win.attach(a);
	Graph_lib::Rectangle b{ Point{ 230,170 }, 20, 20 };
	b.set_color(Color::red);
	win.attach(b);
	Graph_lib::Rectangle c{ Point{ 230,190 }, 20, 20 };
	c.set_color(Color::white);
	win.attach(c);
	Graph_lib::Rectangle d{ Point{ 250,150 }, 20, 20 };
	d.set_color(Color::red);
	win.attach(d);
	Graph_lib::Rectangle e{ Point{ 250,170 }, 20, 20 };
	e.set_color(Color::white);
	win.attach(e);
	Graph_lib::Rectangle f{ Point{ 250,190 }, 20, 20 };
	f.set_color(Color::red);
	win.attach(f);
	Graph_lib::Rectangle g{ Point{ 270,150 }, 20, 20 };
	g.set_color(Color::white);
	win.attach(g);
	Graph_lib::Rectangle h{ Point{ 270,170 }, 20, 20 };
	h.set_color(Color::red);
	win.attach(h);
	Graph_lib::Rectangle i{ Point{ 270,190 }, 20, 20 };
	i.set_color(Color::white);
	win.attach(i);

	win.wait_for_button();

	Graph_lib::Ellipse j{ Point{ 500,300 }, 75,75 };
	j.set_color(Color::blue);
	win.attach(j);
	Graph_lib::Ellipse k{ Point{ 500,300 }, 70,70 };
	k.set_color(Color::dark_blue);
	win.attach(k);
	Graph_lib::Ellipse l{ Point{ 500,300 }, 65,65 };
	l.set_color(Color::blue);
	win.attach(l);
	//
	Graph_lib::Ellipse o{ Point{ 435,300 }, 55,55 };
	o.set_color(Color::dark_cyan);
	win.attach(o);
	Graph_lib::Ellipse p{ Point{ 500,235 }, 55,55 };
	p.set_color(Color::dark_cyan);
	win.attach(p);
	Graph_lib::Ellipse aa{ Point{ 565,300 }, 55,55 };
	aa.set_color(Color::dark_cyan);
	win.attach(aa);
	Graph_lib::Ellipse s{ Point{ 500,365 }, 55,55 };
	s.set_color(Color::dark_cyan);
	win.attach(s);
	Graph_lib::Ellipse ba{ Point{ 500,300 }, 35,35 };
	ba.set_color(Color::dark_cyan);
	win.attach(ba);
	//
	Graph_lib::Ellipse m{ Point{ 500,300 }, 60,60 };
	m.set_color(Color::dark_blue);
	win.attach(m);
	Graph_lib::Ellipse n{ Point{ 500,300 }, 55,55 };
	n.set_color(Color::blue);
	win.attach(n);
	win.wait_for_button();


}


//------------------------------------------------------------------------------
