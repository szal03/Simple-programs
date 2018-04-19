#include "std_lib_facilities.hpp"

using namespace std;

template<typename T>
struct S 
{
	T val;
	S() : val(T()) { }
	S(T z) : val(z) { }

	T& get();
	void set(const T& z);
	T& operator=(const T&);
	const T& get() const;


};
template<class T> T& S<T>::get()
{
	return val;
}
template<class T> void S<T>::set(const T& z)
{
	val = z;
}
template<class T> T& S<T>::operator=(const T& z)
{
	val = z;
	return val;
}
template<class T> istream& operator >> (istream& b, S<T>& e)
{
	T u;
	cin >> u;
	if (!b) return b;
	e = u;
	return b;
}

template<class T> void read_val(T& q)
{
	cin >> q;
}


int main()
{
	S<int> i(28);
	S<char> c('m');
	S<double> d(28.03);
	S<string> s("program");
	vector<int> a;
	 a.push_back(1);
	 a.push_back(2);
	 a.push_back(3);
	 S< vector<int> > v(a);

	 cout << "int: " << i.val << endl;
	 cout << "char: " << c.val << endl;
	 cout << "double: " << d.val << endl;
	 cout << "string: " << s.val << endl;
	 cout << "vector: "<<endl;
	 for (int n = 0; n < v.val.size(); n++)
	 {
		 cout << v.val[n]<<"\n";
	 }
	 cout << "\n";
	 cout << "pkt 8: \n";
	 cout << "int: " << i.get() << endl;
	 cout << "char: " << c.get() << endl;
	 cout << "double: " << d.get() << endl;
	 cout << "string: " << s.get() << endl;
	 cout << "vector: " << endl;
	 for (int n = 0; n < v.get().size(); n++)
	 {
		 cout << v.get()[n]<<"\n";
	 }
	 cout << "\n";

	 cout << "int: " << "\n";
	 read_val(i);
	 cout << "char: " << "\n";
	 read_val(c);
	 cout << "double: " << "\n";
	 read_val(d);
	 cout << "string: " << "\n";
	 read_val(s);
	// cout << "vector: " << "\n";



	system("pause");
}