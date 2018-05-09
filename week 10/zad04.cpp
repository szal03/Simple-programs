#include "std_lib_facilities.h"
#include<string>
#include<vector>
#include<map>
#include<fstream>
#include<iostream>

//tez z ksiazki

using namespace std;


typedef vector<string>::const_iterator Line_iter;
class Message
{ 
	Line_iter first;
	Line_iter last;
public:
	Message(Line_iter p1, Line_iter p2) :first(p1), last(p2) { }
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
Mail_file::Mail_file(const string& n) :name(n)
{
	ifstream in(n.c_str());
	if (!in)
	{
		cerr << "no " << n << '\n';
		exit(1);  
	}

	string s;
	while (getline(in, s)) lines.push_back(s);   

	Line_iter first = lines.begin();    
	for (Line_iter p = lines.begin(); p != lines.end(); p++)
	{
		if (*p == "----") {     
			m.push_back(Message(first, p));
			first = p + 1;        
		}
	}
}
string find_prefix(const Message* m, const string& s)
{
	regex pat("^" + s + "(.*)$");
	smatch matches;
	for (Line_iter p = m->begin(); p != m->end(); ++p)
	{
		if (regex_match(*p, matches, pat))
		{
			return matches[1];
		}
	}
	return "";
}
string find_from_addr(const Message* m)
{
	return find_prefix(m, "From: ");
}
string find_subject(const Message* mes)
{
	return find_prefix(mes, "Subject: ");
}
int main()
{
	cout << "write name of mail file: ";
	string name;
	cin >> name;

	cin.ignore();

	Mail_file input(name);


	multimap<string, const Message*> sender;
	for (Mess_iter q = input.begin(); q != input.end(); q++)
	{
		const Message& m = *q;

		string s = find_from_addr(&m);
		if (s != "")
		{
			sender.insert(make_pair(s, &m));
		}
	}
	cout << "\n";
	cout << "write sender: ";
	string sender_name;
	getline(cin, sender_name);
	typedef multimap<string, const Message*>::const_iterator MCI;
	pair<MCI, MCI> pa = sender.equal_range(sender_name);
	for (MCI q = pa.first; q != pa.second; ++q)
	{
		cout << find_subject(q->second);
		cout << "\n";
	}
	system("pause");
}