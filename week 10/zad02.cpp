#include "std_lib_facilities.h"
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
//z ksiazki
using namespace std;


typedef vector<string>::const_iterator Line_iter;
class Message
{ 
	Line_iter first;
	Line_iter last;
public:
	Message(Line_iter p1, Line_iter p2) :first{ p1 }, last{ p2 } { }
	Line_iter begin() const { return first; }
	Line_iter end() const { return last; }
	
};

typedef vector<Message>::const_iterator Mess_iter;

struct Mail_file
{				 
	string name; 
	vector<string> lines;
	vector<Message> m; 
	Mail_file(const string& n); 

	Mess_iter begin() const { return m.begin(); }
	Mess_iter end() const { return m.end(); }
};

int is_prefix(const string& s, const string& p)
{
	int n = p.size();
	if (string(s, 0, n) == p) return n;
	return 0;
}

bool messenge_end(Line_iter l)
{
	return *l == "-------------";
}

Mail_file::Mail_file(const string& n)
{
	ifstream in{ n }; 
	if (!in)
	{
		cerr << "no " << n << '\n';
		exit(1); 
	}
	string line;
	while (getline(in, line))
	{
		lines.push_back(line);
	}

	
	bool new_message = false;

	Line_iter first = lines.begin();
	for (Line_iter p = lines.begin(); p != lines.end(); ++p)
	{
		if (is_prefix(*p, "From: "))
		{
			if (new_message)
			{
				throw std::runtime_error("Missing end-of-file indicator!\n");
			}
			new_message = true;
		}

		if (messenge_end(p))
		{
			while (messenge_end(p))
			{
				++p;
			}

			if (new_message)
			{
				new_message = false;
			}
			m.push_back(Message(first, p));
			first = p + 1;
		}
	}


}
int main()
{
	system("pause");
}
