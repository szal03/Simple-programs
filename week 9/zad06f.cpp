#include "std_lib_facilities.h"
//z ksiazki
int main()
{
	string from, to;
	cout << "Enter input file name, then output file name: ";
	cin >> from >> to;                      // get source and target file names

	ifstream is(from.c_str());              // open input stream
	ofstream os(to.c_str());                // open output stream

	istream_iterator<string> ii(is);        // make input iterator for stream
	istream_iterator<string> eos;           // input sentinel
	ostream_iterator<string> oo(os, "\n");   // make output iterator for stream

											 //// doing it the wrong way
											 //const int max_size = 150;               // input has 250 words!
											 //vector<string> b(max_size);
											 //copy(ii,eos,b.begin());

	vector<string> b(ii, eos);               // b is a vector initialised from input
	sort(b.begin(), b.end());                // sort the buffer
	copy(b.begin(), b.end(), oo);             // copy buffer to output

											  //when the input buffer overflows it crashes

	system("pause");
}
