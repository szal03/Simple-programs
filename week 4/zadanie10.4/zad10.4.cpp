#include"std_lib_facilities.h"

void print_vector(vector<string> a)
{
	for (int i = 0; i < a.size(); ++i)
	{
		cout << a[i] << endl;
	}
}

vector <string> split( string& b)
{
	istringstream istring(b);
	string s;
	vector<string> c;
	while (istring >> s) c.push_back(s);
	return c;
}


int main()
{
	cout << "Write words: ";
	string word;
	while (getline(cin, word))
	{
		vector<string> a = split(word);
		cout << "entered words:\n";
		
		print_vector(a);
		cout << "ones again: ";
	}

	system("pause");
	return 0;
}