

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Fullname;
	string string2;
	string string3;

	cout << "Please enter string 1 ? " << endl;
	getline(cin, Fullname);
	cout << "Please enter string 2 ?"  << endl;
	cin >> string2;

	cout << "Please enter string 3 ?" << endl;
	cin >> string3;

	cout << "*****************************************" << endl;

	cout << "The length of String1 is " << Fullname.length() << endl;

	cout << "Characters at 0,2,4,7 are: " << Fullname[0] << " " << Fullname[2] << " " << Fullname[4] << " " << Fullname[7] << endl;

	string string4 = string2 + string3;
	int sum = stoi(string2) * stoi(string3);

	cout << "concatenating String2 and String3 = " << string4 << endl;
	cout << string2 << " * " << string3 << " = " << sum << endl;

	return 0;
}


