

#include <iostream>
using namespace std;


struct stInfo {
	string FirstName;
	string LastName;
};

stInfo ReadInfo() {

	stInfo Info;
	cout << "Please enter your first name: " << endl;
	cin >> Info.FirstName;
	cout << "Please enter your last name: " << endl;
	cin >> Info.LastName;

	return Info;
}

string GetFullName(stInfo Info, bool Reversed) {

	string FullName = "";
	if (Reversed)
		FullName = Info.LastName + " " + Info.FirstName;        //This line of code and term(True or False) down , if you want the reversed name is printed. if you do not want the reversed name you can change from true to false down in the main.
	else
		FullName = Info.FirstName + " " + Info.LastName;
	return FullName;

}

void PrintFullName(string FullName) {

	cout << "Your full name is: " << FullName << endl;

}
int main()
{
	PrintFullName(GetFullName(ReadInfo(),false));
	return 0;
}
