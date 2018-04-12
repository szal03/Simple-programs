#include "Simple_window.hpp"
#include "Graph.hpp"
#include "GUI.hpp"

using namespace std;
using namespace Graph_lib;

struct my_window : Window
{
	my_window(Point xy, int w, int h, const string& title);


	//widgets 4x4
	Button quit_button;
	Button one_button;
	Button two_button;
	Button three_button;
	Button four_button;
	Button five_button;
	Button six_button;
	Button seven_button;
	Button eight_button;
	Button nine_button;
	Button ten_button;
	Button eleven_button;
	Button twelve_button;
	Button thirteen_button;
	Button fourteen_button;
	Button next_button;
	Graph_lib::Rectangle a{ Point(450,200),100,100 };

	//
	void change(Color c)
	{
		//a.set_color(c);
		a.set_fill_color(c);
	}
	//
	void one_pressed() { change(Color::red); next(); }
	void two_pressed() { change(Color::dark_red); next();}
	void three_pressed() { change(Color::magenta);  next();}
	void four_pressed() { change(Color::dark_magenta);  next();}
	void five_pressed() { change(Color::blue); next();}
	void six_pressed() { change(Color::dark_blue); next();}
	void seven_pressed() { change(Color::green); next();}
	void eight_pressed() { change(Color::dark_green); next();}
	void nine_pressed() { change(Color::yellow); next();}
	void ten_pressed() { change(Color::dark_yellow); next();}
	void eleven_pressed() { change(Color::cyan); next();}
	void tweleve_pressed() { change(Color::dark_cyan); next();}
	void thirteen_pressed() { change(Color::black); next();}
	void fourteen_pressed() { change(Color::white); next();}
	void next() { redraw(); };
	//
	void quit() { hide(); };
	//
	static void cb_quit(Address, Address);
	static void cb_1(Address, Address pw) { reference_to<my_window>(pw).one_pressed(); }
	static void cb_2(Address, Address pw) { reference_to<my_window>(pw).two_pressed(); }
	static void cb_3(Address, Address pw) { reference_to<my_window>(pw).three_pressed(); }
	static void cb_4(Address, Address pw) { reference_to<my_window>(pw).four_pressed(); }
	static void cb_5(Address, Address pw) { reference_to<my_window>(pw).five_pressed(); }
	static void cb_6(Address, Address pw) { reference_to<my_window>(pw).six_pressed(); }
	static void cb_7(Address, Address pw) { reference_to<my_window>(pw).seven_pressed(); }
	static void cb_8(Address, Address pw) { reference_to<my_window>(pw).eight_pressed(); }
	static void cb_9(Address, Address pw) { reference_to<my_window>(pw).nine_pressed(); }
	static void cb_10(Address, Address pw) { reference_to<my_window>(pw).ten_pressed(); }
	static void cb_11(Address, Address pw) { reference_to<my_window>(pw).eleven_pressed(); }
	static void cb_12(Address, Address pw) { reference_to<my_window>(pw).tweleve_pressed(); }
	static void cb_13(Address, Address pw) { reference_to<my_window>(pw).thirteen_pressed(); }
	static void cb_14(Address, Address pw) { reference_to<my_window>(pw).fourteen_pressed(); }
	static void cb_next(Address, Address);

};

my_window::my_window(Point xy, int w, int h, const string& title)
	:Window(xy, w, h, title),
	quit_button{ Point(0, 0), 100, 100, "Quit", cb_quit },
	one_button{ Point(100, 0), 100, 100, "1", cb_1 },
	two_button{ Point(200, 0), 100, 100, "2", cb_2 },
	three_button{ Point(300, 0), 100, 100, "3", cb_3 },
	four_button{ Point(0, 100), 100, 100, "4", cb_4 },
	five_button{ Point(100, 100), 100, 100, "5", cb_5 },
	six_button{ Point(200, 100), 100, 100, "6", cb_6 },
	seven_button{ Point(300, 100), 100, 100, "7", cb_7 },
	eight_button{ Point(0, 200), 100, 100, "8", cb_8 },
	nine_button{ Point(100, 200), 100, 100, "9", cb_9 },
	ten_button{ Point(200, 200), 100, 100, "10", cb_10 },
	eleven_button{ Point(300, 200), 100, 100, "11", cb_11 },
	twelve_button{ Point(0, 300), 100, 100, "12", cb_12 },
	thirteen_button{ Point(100, 300), 100, 100, "13", cb_13 },
	fourteen_button{ Point(200, 300), 100, 100, "14", cb_14 },
	next_button{ Point(300, 300), 100, 100, "next", cb_next }
{
	attach(quit_button);
	attach(one_button);
	attach(two_button);
	attach(three_button);
	attach(four_button);
	attach(five_button);
	attach(six_button);
	attach(seven_button);
	attach(eight_button);
	attach(nine_button);
	attach(ten_button);
	attach(eleven_button);
	attach(twelve_button);
	attach(thirteen_button);
	attach(fourteen_button);
	attach(next_button);
	attach(a);
}


void my_window::cb_quit(Address, Address pw)
{
	reference_to<my_window>(pw).quit();
}

void my_window::cb_next(Address, Address pw)
{
	reference_to<my_window>(pw).next();
}



int main()
{
	my_window win(Point(100, 100), 600, 400, "okienko");

	return gui_main();

	system("pause");
}