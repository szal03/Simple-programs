#include "std_lib_facilities.h"

void int_output()
{
	cout << showbase << "Birth year:" << endl
		<< 1997 << "\t(decimal)" << endl
		<< hex << 1997 << "\t(hexadecimal)" << endl
		<< oct << 1997 << "\t(octal)" << endl;

	cout << dec << endl << "Age:" << endl
		<< 21 << "\t(decimal)" << endl
		<< hex << 21 << "\t(hexadecimal)" << endl
		<< oct << 21 << "\t(octal)" << endl;
}

void int_input()
{
	int a;
	int b;
	int c;
	int d;
	cin >> a >> hex >> b >> oct >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << endl;
}

void float_output()
{
	cout << 1234567.89 << "\t(general)\n"
		<< fixed << 1234567.89 << "\t(fixed)\n"
		<< scientific << 1234567.89 << "\t(scientific)\n";
}

int main()
{
	cout << setw(10) << "Nowak" << " | " << "Karolina" << " | "
		<< setw(16) << "+48 663 49 08" << " | " << setw(29) << "k.nowak@gmail.com" << endl
		<< setw(10) << "Kowalska" << " | " << setw(8) << "Klara" << " | "
		<< setw(16) << "+48 565 78 87" << " | " << setw(29) << "kkow@wp.pl" << endl
		<< setw(10) << "Jakub" << " | " << setw(8) << "Mily" << " | "
		<< "+48 565 78 15" << " | " << setw(29) << "mk@gmail.com" << endl
		<< setw(10) << "Cezary" << " | " << setw(8) << "Domek" << " | "
		<< "+48 567 12 87" << " | " << setw(29) << "cdom@gmail.com" << endl;
	

	system("pause");
}