#include "std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to(followed by 'enter'):\n";
	string first_name;	// first_name is a variable of type string
	cin >> first_name;
	cout << "write friend name: \n";
	string friend_name;
	cin >> friend_name;
	cout << "Chose friend sex: (m - male, f - female)\n";
	char friend_sex = 0;
	cin >> friend_sex;
	int age;
	cout << "write how old " <<first_name<< " is: ";
	cin >> age;
	if (age < 0 || age >= 110)
	{
		cout << "simple_error \n";
	}
	cout << "write your name: \n";
	string your_name;
	cin >> your_name;

	
	cout << "Dear, " << first_name << "!\n" << "How are you? I am fine. I miss you.\n" << endl;
	cout << "Have you seen " << friend_name << " lately? \n" << endl;
	if (friend_sex == 'm')
	{
		cout << "If you see  " << friend_name << "  please ask him to call me.\n" << endl;
	}
	else if (friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me\n" << endl;
	}

	cout << "I hear you just had a birthday and you are " << age << " years old.\n" << endl;

	if (age < 12)
	{
		cout << "Next year you will be " << age + 1 << endl;
	}
	else if (age == 17)
	{
		cout << "Next year you will be able to vote." << endl;
	}
	else if (age > 70 && age<110)
	{
		cout << "I hope you are enjoying retirement." << endl;
	}
	cout << "Yours sincerely \n\n";

	cout << your_name<<"\n";




	system("pause");
}