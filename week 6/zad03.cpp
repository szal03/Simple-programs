
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.hpp"    // get access to our window library
#include "Graph.hpp"            // get access to our graphics library facilities
#include "GUI.hpp"

//------------------------------------------------------------------------------
namespace Graph_lib {
	class RoundedBox : public Shape {
	public:
		RoundedBox(Point ul, Point dr);
		RoundedBox(Point ul, int w, int h);

		void draw_lines() const;
	private:
		Point upperLeft;
		int width;
		int height;
		int roundWidth;
		int roundHeight;
	};

	RoundedBox::RoundedBox(Point ul, int w, int h)
		: upperLeft(ul), width(w), height(h), roundWidth(w / 4), roundHeight(h / 4)
	{
		add(ul);
	}

	void RoundedBox::draw_lines() const {
		if (color().visibility()) {
			fl_arc(point(0).x, point(0).y, width / 2, height / 2, 90, 180);
			fl_arc(point(0).x + width / 2, point(0).y, width / 2, height / 2, 0, 90);
			fl_arc(point(0).x + width / 2, point(0).y + height / 2, width / 2, height / 2,
				270, 0);
			fl_arc(point(0).x, point(0).y + height / 2, width / 2, height / 2, 180, 270);

			fl_xyline(point(0).x + roundWidth, point(0).y,
				point(0).x + width - roundWidth);
			fl_yxline(point(0).x + width, point(0).y + roundHeight,
				point(0).y + height - roundHeight);
			fl_xyline(point(0).x + roundWidth, point(0).y + height,
				point(0).x + width - roundWidth);
			fl_yxline(point(0).x, point(0).y + roundHeight,
				point(0).y + height - roundHeight);
		}
	}

}

int main()
{
	using namespace Graph_lib;   // our graphics facilities are in Graph_lib

	Point tl(100, 100);           // to become top left  corner of window


	Simple_window win(tl, 600, 400, "Canvas");    // make a simple window

	//Graph_lib::Ellipse e{ Point{ 50,50 },500,300 };

	//Graph_lib::RoundedBox r(Point{ 50,50 }, 500, 300);


	//Graph_lib::Rectangle r{ Point{ 50,50 },500,300 };

	Graph_lib::RoundedBox r(Point{ 50,50 }, 500, 300);
	win.attach(r);
	r.set_color(Color::black);
	win.set_label("Rec");
	//win.wait_for_button();

	/*Graph_lib::Rectangle pasek{ Point{ 80,50 },470,50 };
	win.attach(pasek);
	pasek.set_fill_color(Color::white);
	win.set_label("Rec");
	win.wait_for_button();*/

	Graph_lib::Rectangle x{ Point{ 450,70 },30,30 };
	win.attach(x);
	x.set_color(Color::black);
	x.set_fill_color(Color::red);
	win.set_label("Rec");
//	win.wait_for_button();

	Graph_lib::Rectangle kw{ Point{ 420,70 },30,30 };
	win.attach(kw);
	kw.set_color(Color::black);
	kw.set_fill_color(Color::red);
	win.set_label("Rec");

	Graph_lib::Rectangle bp{ Point{425,75},20,20 };
	win.attach(bp);
	bp.set_color(Color::white);

	Graph_lib::Rectangle z{ Point{ 390,70 },30,30 };
	win.attach(z);
	z.set_color(Color::black);
	z.set_fill_color(Color::red);
	win.set_label("Rec");

	Text pas{ Point{399,95},"-" };
	pas.set_font(Graph_lib::Font::helvetica_bold);
	pas.set_font_size(30);
	pas.set_color(Color::white);
	win.attach(pas);

	Text t{ Point{ 455,95 },"X" };
	t.set_font(Graph_lib::Font::helvetica_bold);
	t.set_font_size(30);
	t.set_color(Color::white);
	win.attach(t);
//	win.wait_for_button();

	Text tytul{ Point{ 120,75 },"tytul:to tylko okienko" };
	tytul.set_font(Graph_lib::Font::helvetica_bold_italic);
	tytul.set_font_size(20);
	tytul.set_color(Color::black);
	win.attach(tytul);

	Text p{ Point{ 200,180 },"Pseudo_Okienko" };
	p.set_font(Graph_lib::Font::helvetica_bold);
	p.set_font_size(30);
	p.set_color(Color::black);
	win.attach(p);
//	win.wait_for_button();


	Graph_lib::Rectangle ok{ Point{250,250},100,50 };
	win.attach(ok);
	//ok.set_fill_color(Color::white);
	ok.set_color(Color::black);
	win.set_label("Rec");
//	win.wait_for_button();

	Text o{ Point{ 270,290 },"OK" };
	o.set_font(Graph_lib::Font::helvetica_bold_italic);
	o.set_font_size(30);
	o.set_color(Color::black);
	win.attach(o);
	win.wait_for_button();
	
	/*Graph_lib::Polygon poly;                // make a shape (a polygon)

	poly.add(Point(300, 200));    // add a point
	poly.add(Point(350, 100));    // add another point
	poly.add(Point(400, 200));    // add a third point 

	poly.set_color(Color::red);  // adjust properties of poly

	win.attach(poly);           // connect poly to the window

	win.wait_for_button();       // give control to the display engine*/
	system("pause");
}

//------------------------------------------------------------------------------
