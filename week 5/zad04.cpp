
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

	Simple_window win(tl, 800, 1000, "Canvas");    // make a simple window


	Graph_lib::Rectangle x1{ Point{ 0,0 }, 100, 100 };
	x1.set_fill_color(Color::red);
	win.attach(x1);
	Graph_lib::Rectangle x2{ Point{ 100,0 }, 100, 100 };
	win.attach(x2);
	Graph_lib::Rectangle x3{ Point{ 200,0 }, 100, 100 };
	win.attach(x3);
	Graph_lib::Rectangle x4{ Point{ 300,0 }, 100, 100 };
	win.attach(x4);
	Graph_lib::Rectangle x5{ Point{ 400,0 }, 100, 100 };
	win.attach(x5);
	Graph_lib::Rectangle x6{ Point{ 500,0 }, 100, 100 };
	win.attach(x6);
	Graph_lib::Rectangle x7{ Point{ 600,0 }, 100, 100 };
	win.attach(x7);
	Graph_lib::Rectangle x8{ Point{ 700,0 }, 100, 100 };
	win.attach(x8);

	Graph_lib::Rectangle x12{ Point{ 0,100 }, 100, 100 };
	win.attach(x12);
	Graph_lib::Rectangle x22{ Point{ 100,100 }, 100, 100 };
	x22.set_fill_color(Color::red);
	win.attach(x22);
	Graph_lib::Rectangle x32{ Point{ 200,100 }, 100, 100 };
	win.attach(x32);
	Graph_lib::Rectangle x42{ Point{ 300,100 }, 100, 100 };
	win.attach(x42);
	Graph_lib::Rectangle x52{ Point{ 400,100 }, 100, 100 };
	win.attach(x52);
	Graph_lib::Rectangle x62{ Point{ 500,100 }, 100, 100 };
	win.attach(x62);
	Graph_lib::Rectangle x72{ Point{ 600,100 }, 100, 100 };
	win.attach(x72);
	Graph_lib::Rectangle x82{ Point{ 700,100 }, 100, 100 };
	win.attach(x82);

	Graph_lib::Rectangle x13{ Point{ 0,200 }, 100, 100 };
	win.attach(x13);
	Graph_lib::Rectangle x23{ Point{ 100,200 }, 100, 100 };
	win.attach(x23);
	Graph_lib::Rectangle x33{ Point{ 200,200 }, 100, 100 };
	x33.set_fill_color(Color::red);
	win.attach(x33);
	Graph_lib::Rectangle x43{ Point{ 300,200 }, 100, 100 };
	win.attach(x43);
	Graph_lib::Rectangle x53{ Point{ 400,200 }, 100, 100 };
	win.attach(x53);
	Graph_lib::Rectangle x63{ Point{ 500,200 }, 100, 100 };
	win.attach(x63);
	Graph_lib::Rectangle x73{ Point{ 600,200 }, 100, 100 };
	win.attach(x73);
	Graph_lib::Rectangle x83{ Point{ 700,200 }, 100, 100 };
	win.attach(x83);

	Graph_lib::Rectangle x14{ Point{ 0,300 }, 100, 100 };
	win.attach(x14);
	Graph_lib::Rectangle x24{ Point{ 100,300 }, 100, 100 };
	win.attach(x24);
	Graph_lib::Rectangle x34{ Point{ 200,300 }, 100, 100 };
	win.attach(x34);
	Graph_lib::Rectangle x44{ Point{ 300,300 }, 100, 100 };
	x44.set_fill_color(Color::red);
	win.attach(x44);
	Graph_lib::Rectangle x54{ Point{ 400,300 }, 100, 100 };
	win.attach(x54);
	Graph_lib::Rectangle x64{ Point{ 500,300 }, 100, 100 };
	win.attach(x64);
	Graph_lib::Rectangle x74{ Point{ 600,300 }, 100, 100 };
	win.attach(x74);
	Graph_lib::Rectangle x84{ Point{ 700,300 }, 100, 100 };
	win.attach(x84);

	Graph_lib::Rectangle x15{ Point{ 0,400 }, 100, 100 };
	win.attach(x15);
	Graph_lib::Rectangle x25{ Point{ 100,400 }, 100, 100 };
	win.attach(x25);
	Graph_lib::Rectangle x35{ Point{ 200,400 }, 100, 100 };
	win.attach(x35);
	Graph_lib::Rectangle x45{ Point{ 300,400 }, 100, 100 };
	win.attach(x45);
	Graph_lib::Rectangle x55{ Point{ 400,400 }, 100, 100 };
	x55.set_fill_color(Color::red);
	win.attach(x55);
	Graph_lib::Rectangle x65{ Point{ 500,400 }, 100, 100 };
	win.attach(x65);
	Graph_lib::Rectangle x75{ Point{ 600,400 }, 100, 100 };
	win.attach(x75);
	Graph_lib::Rectangle x85{ Point{ 700,400 }, 100, 100 };
	win.attach(x85);

	Graph_lib::Rectangle x16{ Point{ 0,500 }, 100, 100 };
	win.attach(x16);
	Graph_lib::Rectangle x26{ Point{ 100,500 }, 100, 100 };
	win.attach(x26);
	Graph_lib::Rectangle x36{ Point{ 200,500 }, 100, 100 };
	win.attach(x36);
	Graph_lib::Rectangle x46{ Point{ 300,500 }, 100, 100 };
	win.attach(x46);
	Graph_lib::Rectangle x56{ Point{ 400,500 }, 100, 100 };
	win.attach(x56);
	Graph_lib::Rectangle x66{ Point{ 500,500 }, 100, 100 };
	x66.set_fill_color(Color::red);
	win.attach(x66);
	Graph_lib::Rectangle x76{ Point{ 600,500 }, 100, 100 };
	win.attach(x76);
	Graph_lib::Rectangle x86{ Point{ 700,500 }, 100, 100 };
	win.attach(x86);

	Graph_lib::Rectangle x17{ Point{ 0,600 }, 100, 100 };
	win.attach(x17);
	Graph_lib::Rectangle x27{ Point{ 100,600 }, 100, 100 };
	win.attach(x27);
	Graph_lib::Rectangle x37{ Point{ 200,600 }, 100, 100 };
	win.attach(x37);
	Graph_lib::Rectangle x47{ Point{ 300,600 }, 100, 100 };
	win.attach(x47);
	Graph_lib::Rectangle x57{ Point{ 400,600 }, 100, 100 };
	win.attach(x57);
	Graph_lib::Rectangle x67{ Point{ 500,600 }, 100, 100 };
	win.attach(x67);
	Graph_lib::Rectangle x77{ Point{ 600,600 }, 100, 100 };
	win.attach(x77);
	x77.set_fill_color(Color::red);
	Graph_lib::Rectangle x87{ Point{ 700,600 }, 100, 100 };
	win.attach(x87);

	Graph_lib::Rectangle x18{ Point{ 0,700 }, 100, 100 };
	win.attach(x18);
	Graph_lib::Rectangle x28{ Point{ 100,700 }, 100, 100 };
	win.attach(x28);
	Graph_lib::Rectangle x38{ Point{ 200,700 }, 100, 100 };
	win.attach(x38);
	Graph_lib::Rectangle x48{ Point{ 300,700 }, 100, 100 };
	win.attach(x48);
	Graph_lib::Rectangle x58{ Point{ 400,700 }, 100, 100 };
	win.attach(x58);
	Graph_lib::Rectangle x68{ Point{ 500,700 }, 100, 100 };
	win.attach(x68);
	Graph_lib::Rectangle x78{ Point{ 600,700 }, 100, 100 };
	win.attach(x78);
	Graph_lib::Rectangle x88{ Point{ 700,700 }, 100, 100 };
	x88.set_fill_color(Color::red);
	win.attach(x88);

	Image i1{ Point{ 600,0 },"piesel.jpg" };
	win.attach(i1);
	Image i2{ Point{ 0,600 },"piesel.jpg" };
	win.attach(i2);
	Image i3{ Point{ 500,300 },"piesel.jpg" };
	win.attach(i3);
	win.wait_for_button();
	Image i4{ Point{ 0,0 },"batman.jpg" };
	win.attach(i4);

	int x = 0, y = 0;
	while (1)
	{
		win.wait_for_button();
		x += 100;
		if (x == 800)
		{
			i4.move(-800, 100);
			y += 100;
			x = 0;
		}

		if (y == 800)
		{
			i4.move(0, -800);
			y = 0;
		}
		i4.move(100, 0);
	}

}

//------------------------------------------------------------------------------
