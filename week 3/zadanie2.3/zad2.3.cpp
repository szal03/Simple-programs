
/*   zadanie 1,2,3/253
calculator08buggy.cpp

Helpful comments removed.

We have inserted 3 bugs that the compiler will catch and 3 that it won't.
*/

#include "std_lib_facilities.h"

class Token
{
public:
	char kind; //typ tokenu
	double value; //typ zmiennej "value"
	string name;  // dla zmiennych - nazwa
	Token(char ch) :kind(ch), value(0) { } // robi tokena z chara 
	Token(char ch, double val) :kind(ch), value(val) { } // robi tokena z chara i doubla 
	Token(char ch, string n) :kind(ch), name(n) { }
};

class Token_stream  // klasa - srumien Tokena 
{
	bool full;
	Token buffer;
public:
	Token_stream() :full(0), buffer(0) { }

	Token get();
	void unget(Token t) { buffer = t; full = true; }

	void ignore(char);

};

const char let = '#';
const char quit = 'Q';
const char print = ';';
const char number = '8';
const char name = 'a';
const char sq_root = 's';
const char pow_pow = 'p';
const int k = 1000;
const double pi = 3.14;
const double e = 2.7182;
const string sqrtkey = "sqrt";
const string powkey = "pow";
const string quitkey = "quit";

Token Token_stream::get()
{
	if (full) { full = false; return buffer; }
	char ch;
	cin >> ch;
	switch (ch)
	{
	case '(':
	case ')':
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
	case ';':
	case '=':
		return Token(ch);
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	{	cin.unget();
	double val;
	cin >> val;
	return Token(number, val);
	}
	default:
		if (isalpha(ch))
		{
			string s;
			s += ch;
			while (cin.get(ch) && (isalpha(ch) || isdigit(ch))) s = ch;
			cin.unget();
			if (s == sqrtkey) return Token(sq_root);
			if (s == powkey) return Token(pow_pow);
			if (s == "let") return Token(let);
			if (s == "quit") return Token(quit);
			return Token(name, s);
		}
		error("Bad token");
	}
}

void Token_stream::ignore(char c)
{
	if (full && c == buffer.kind)
	{
		full = false;
		return;
	}
	full = false;

	char ch;
	while (cin >> ch)
		if (ch == c) return;
}

struct Variable
{
	string name;
	double value;
	Variable(string n, double v) :name(n), value(v) { }
};

vector<Variable> names;

double get_value(string s)
{
	for (int i = 0; i<names.size(); ++i)
		if (names[i].name == s) return names[i].value;
	error("get: undefined name ", s);
}

void set_value(string s, double d)
{
	for (int i = 0; i <= names.size(); ++i)
		if (names[i].name == s)
		{
			names[i].value = d;
			return;
		}
	error("set: undefined name ", s);
}

bool is_declared(string s)
{
	for (int i = 0; i<names.size(); ++i)
		if (names[i].name == s) return true;
	return false;
}

Token_stream ts;

double expression();

double my_pow(double base, int expo)
{
	if (expo == 0) {
		if (base == 0) return 0;
		return 1;
	}
	double res = base;
	for (int i = 2; i <= expo; ++i)
		res *= base;
	return res;
}

double primary()
{
	Token t = ts.get();
	switch (t.kind)
	{
	case '(':
	{	double d = expression();
	t = ts.get();
	if (t.kind != ')') error("'(' expected");
	}
	case '-':
		return -primary();
	case number:
		return t.value;
	case name:
		return get_value(t.name);
	case sq_root:   //############### pierwiastek
	{   t = ts.get();
	if (t.kind != '(') error("'(' expected");
	double d = expression();
	if (d < 0) error("Square roots of negative numbers");
	t = ts.get();
	if (t.kind != ')') error("')' expected");
	return sqrt(d); }
	case pow_pow: //############################ funkcja pow()
	{
		double e = expression();
		t = ts.get();
		if (t.kind != '(') error("'(' expected");
		t = ts.get();
		if (t.kind != ',') error("',' expected");
		t = ts.get();
		if (t.kind != number) error("second argument of 'pow' is not a number");
		int i = int(t.value);
		if (i != t.value) error("second argument of 'pow' is not an integer");
		t = ts.get();
		if (t.kind != ')') error("')' expected");
		return my_pow(e, i);

	}
	default:
		error("primary expected");
	}
}

double term()
{
	double left = primary();
	while (true)
	{
		Token t = ts.get();
		switch (t.kind)
		{
		case '*':
			left *= primary();
			break;
		case '/':
		{	double d = primary();
		if (d == 0) error("divide by zero");
		left /= d;
		break;
		}	
		default:
			ts.unget(t);
			return left;
		}
	}
}

double expression()
{
	double left = term();
	while (true)
	{
		Token t = ts.get();
		switch (t.kind)
		{
		case '+':
			left += term();
			break;
		case '-':
			left -= term();
			break;
		default:
			ts.unget(t);
			return left;
		}
	}
}

double declaration()
{
	Token t = ts.get();
	if (t.kind != 'a') error("name expected in declaration");
	string name = t.name;
	if (is_declared(name)) error(name, " declared twice");
	Token t2 = ts.get();
	if (t2.kind != '=') error("= missing in declaration of ", name);
	double d = expression();
	names.push_back(Variable(name, d));
	return d;
}

double statement()
{
	Token t = ts.get();
	switch (t.kind)
	{
	case let:
		return declaration();
	default:
		ts.unget(t);
		return expression();
	}
}

void clean_up_mess()
{
	ts.ignore(print);
}

const string prompt = "> ";
const string result = "= ";

void calculate()
{
	while (true) try
	{
		cout << prompt;
		Token t = ts.get();
		while (t.kind == print) t = ts.get();
		if (t.kind == quit) return;
		ts.unget(t);
		cout << result << statement() << endl;
	}
	catch (runtime_error& e)
	{
		cerr << e.what() << endl;
		clean_up_mess();
	}
}

int main()
{

	try
	{
		calculate();
		return 0;
	}
	catch (exception& e)
	{
		cerr << "exception: " << e.what() << endl;
		char c;
		while (cin >> c&& c != ';');
		return 1;
	}
	catch (...)
	{
		cerr << "exception\n";
		char c;
		while (cin >> c && c != ';');
		return 2;
	}


	system("pause");
}