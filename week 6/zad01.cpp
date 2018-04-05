#include "std_lib_facilities.hpp"

using namespace std;

class B1
{
public:
	virtual void vf() const
	{
		cout << "B1::vf()\n";
	}
	void f() const
	{
		cout << "B1::f();\n";
	}
	virtual void pvf() const
	{
		cout << "B1::pvf()\n";
	}
};

class D1 : public B1
{
public:
	virtual void vf() const
	{
		cout << "D1::vf()\n";
	}
	void f()
	{
		cout << "D1::f();\n";
	}

};

//repeat
class B11
{
public:
	virtual void vf() const
	{
		cout << "B11::vf()\n";
	}
	void f() const
	{
		cout << "B11::f();\n";
	}
	virtual void pvf() const
	{
		cout << "B11::pvf()\n";
	}
};
class D11 : public B11
{
public:
	virtual void vf() const
	{
		cout << "D11::vf()\n";
	}
	void f()
	{
		cout << "D11::f();\n";
	}

};
//pkt 6
class D2 : public D1
{
public:
	virtual void vf() const
	{
		cout << "D2::vf()\n";
	}
	void f()
	{
		cout << "D2::f();\n";
	}
	void pvf() const
	{
		cout << "D2:pvf()\n";
	}
};
class B2
{
public:
	virtual void pvf() const
	{
		cout << "B2::pvf()\n";
	}
};
class D21 : public B2
{
public:
	void pvf() const
	{ 
		cout << s << endl; 
	}
	string s;

};
class D22 : public B2
{
public:
	void pvf() const
	{
		cout << n << endl;
	}
	int n;
};


void call(const B1& a)
{
	a.vf();
	a.f();
	a.pvf();

}
void call2(const B11& b)
{
	b.vf();
	b.f();
	b.pvf();
}
void f(const B2& i)
{
	i.pvf();
}



int main()
{
	B1 a;
	call(a);
	D1 b;
	call(b);
	B11 c;
	call2(c);
	D11 d;
	call2(d);
	D2 e;
	call(e);
	B2 j;
	D21 g;
	D22 h;

	a.f();
	a.vf();
	a.pvf();
	b.f();
	b.vf();
	c.f();
	c.vf();
	c.pvf();
	d.f();
	d.vf();

	//j.pvf();
	//g.pvf();
	//h.pvf();

	cout << "\n";
	g.s = "D21";
	h.n = 22;

	f(g);
	f(h);

	system("pause");
}