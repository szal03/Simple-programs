#include "std_lib_facilities.h"

using namespace std;

struct Message
{
	int n,m,o;
};
struct Node
{
	int p,r;
};

void frag1()
{
	Message* a = new Message();
	Node* n1 = new Node();
	delete a;
	Node* n2 = new Node();
	Message* a1 = 0;
	Node* n3 = 0;
	Node* n4 = 0;
	for (int i = 0; i<100; ++i)
	{
		a1 = new Message();
		n3 = new Node();
		delete a1;
		n4 = new Node();
	}
	cout << "with fragmentation: \n";
	cout<< n4 - n1 << endl;
}

void frag2()
{
	Node* n1 = new Node();
	Node* n2 = new Node();
	Message* a = new Message();
	delete a;
	Message* a1 = 0;
	Node* n3 = 0;
	Node* n4 = 0;
	for (int i = 0; i<100; ++i) 
	{
		n3 = new Node();
		n4 = new Node();
		a1 = new Message();
		delete a1;
	}
	cout << "without fragmentation: \n";
	cout<< n4 - n1 << endl;
}

int main()
{
	cout << "message: \n";
	cout<< sizeof(Message) << endl;
	cout << "node: \n";
	cout<< sizeof(Node) << endl;

	frag1();
	frag2();

	system("pause");
}