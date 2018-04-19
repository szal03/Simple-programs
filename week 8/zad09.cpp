#include "std_lib_facilities.hpp" //zamienic na Numbers


template<class T> class Number
{
	T a;
public:
	Number() : a(T()) { }
	Number(const Number& arg) : a(arg.a) { }
	Number(T b) : a(b) { }
	Number& operator=(const Number& b) { a = b.a; }
	T get() const { return a; }
};

template<class T>
Number<T> operator+(const Number<T>& c, const Number<T>& d)
{
	return Number<T>(c.get() + d.get());
}
template<class T>
Number<T> operator-(const Number<T>& c, const Number<T>& d)
{
	return Number<T>(c.get() - d.get());
}

template<class T>
Number<T> operator*(const Number<T>& c, const Number<T>& d)
{
	return Number<T>(c.get() * d.get());
}
template<class T>
Number<T> operator/(const Number<T>& c, const Number<T>& d)
{
	return Number<T>(c.get() / d.get());
}

template<class T>
Number<T> operator%(const Number<T>& c, const Number<T>& d)
{
	return Number<T>(c.get() % d.get());
}
template<class T>
ostream& operator<<(ostream& o, const Number<T>& e)
{
	o << e.get();
	return o;
}


template<class T, class U>

typename common_type<T, U>::type function(const vector<T>& vt, const vector<U>& vu)
{
	typename std::common_type<T, U>::type sum = 0;

	for (int i = 0; i<vt.size(); i++)
	{
		sum += vt[i] * vu[i];
	}
	return sum;
}

int main()
{
	vector<int> a;

	for (int i = 0; i < 5; ++i)
	{
		a.push_back(i);
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << " " << a[i];
	}

	cout << endl;

	vector<double> b;

	for (int i = 0; i < 6; ++i)
	{
		b.push_back(i*1.6);
	}
	for (int i = 0; i < 6; ++i)
	{
		cout << " " << function(a, b);
	}
	cout << "\n";

	

	cout << "sprawdzenie(int): \n";
	Number<int> n = 2;
	Number<int> n1 = 5;
	Number<int> n2 = 6;

	cout << "n+n1+n2 = " << n + n1 + n2 << endl;
	cout << "n2-n= " << n2 - n << endl;
	cout << "n1*n2= " << n1 * n2 << endl;
	cout << "n2/n= " << n2 / n << endl;
	cout << "n2%n1= " << n2 % n1 << endl;

	cout << "sprawdzenie(double): \n";
	Number<double> d = 1.5;
	Number<double> d1 = 5.25;
	Number<double> d2 = 10.75;

	cout << "d+d1+d2 = " << d + d1 + d2 << endl;
	cout << "d2-d= " << d2 - d << endl;
	cout << "d1*d2= " << d1 * d2 << endl;
	cout << "d2/d= " << d2 / d << endl;
	//cout << "d2%d1= " << d2 % d1 << endl;

	vector<int>pierwszy;
	pierwszy.push_back(n);
	pierwszy.push_back(n1);
	pierwszy.push_back(n2);

	vector<double>drugi;
	drugi.push_back(n);
	drugi.push_back(n1);
	drugi.push_back(n2);

	//nie dziala


	system("pause");
}