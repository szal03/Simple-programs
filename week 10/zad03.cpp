#include "std_lib_facilities.h"
#include<string>
#include<vector>
#include<fstream>
#include<iostream>
//z ksiazki
using namespace std;

typedef vector<string>::const_iterator Line_iter;
class Message
{
	Line_iter start;
	Line_iter last;
public:
	Message(Line_iter p1, Line_iter p2) :start(p1), last(p2) { }
	Line_iter begin() const{return start; }
	Line_iter end() const{ return last; }
};

ostream& operator<<(ostream& os, const Message& m)
{
	for (Line_iter p = m.begin(); p != m.end(); ++p)
	{
		os << *p << endl;
	}
	return os;
}

typedef vector<Message>::const_iterator Mess_iter;

struct Mail_file
{

	string name;
	vector<string> lines;
	vector<Message> m;

	Mail_file(const string& n);

	Mess_iter begin() const
	{
		return m.begin();
	}
	Mess_iter end() const
	{
		return m.end();
	}
};
Mail_file::Mail_file(const string& n) :name(n)
{
	ifstream a(n.c_str());
	if (!a) 
	{
		cerr << "can not open file"<<endl;
		exit(1);    
	}

	string s;
	while (getline(a, s))
	{
		lines.push_back(s);
	}

	Line_iter first = lines.begin();    
	for (Line_iter p = lines.begin(); p != lines.end(); ++p)
	{
		if (*p == "----") 
		{    
			m.push_back(Message(first, p));
			first = p + 1;       
		}
	}
}

int is_prefix(const string& s, const string& p)
{
	int n = p.size();
	if (string(s, 0, n) == p) return n;
	return 0;
}

bool find_from_addr(const Message* m, string& s)
{
	for (Line_iter p = m->begin(); p != m->end(); ++p)
		if (int n = is_prefix(*p, "From: "))
		{
			s = string(*p, n);
			return true;
		}
	return false;
}

string find_subject(const Message* m)
{
	for (Line_iter p = m->begin(); p != m->end(); ++p)
	{
		if (int n = is_prefix(*p, "Theme: ")) return string(*p, n);
	}
	return " ";
}

int main()
{
	cout << "write name of mail file: ";
	string name;
	cin >> name;

	cin.ignore();   

	Mail_file mfile(name);

	system("pause");
}


