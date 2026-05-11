
#include <iostream>
#include <string>
using namespace std;



struct stAddress
{
	string country;
	string city;
	string street;
	string POBOX;

};
struct stContactInfo
{
	string phoneNumber;
	string emailAddress;
	stAddress Address;
};
struct stUserEnums
{
	enum enGender { Male = 0, Female = 1 };
	enum enStatus { Single = 0, Married = 1 };
	enum enFavoriteColor { White, Black, Red, Yellow, Blue };

	enGender Gender;
	enStatus Status;
	enFavoriteColor FavoriteColor;
};
struct stUser
{
	string name;
	short Age;
	int MonthlySalary;
	stContactInfo Contact;
	stUserEnums Enums;
};

	

void ReadInfo(stUser &Info)
{
	int genderInput;
	int statusInput;
	int colorInput;

	
	cout << "Enter your full name: " << endl;
	getline(cin, Info.name);
	cout << "Enter your age: " << endl;
	cin >> Info.Age;
	cout << "Enter your phone number: \n";
	cin >> Info.Contact.phoneNumber;
	cout << "Enter your email: \n";
	cin >> Info.Contact.emailAddress;
	cin.ignore();
	cout << "Enter your city: " << endl;
	getline(cin, Info.Contact.Address.city);
	cout << "Enter your country: " << endl;
	getline(cin, Info.Contact.Address.country);
	cout << "Enter your street name: " << endl;
	getline(cin, Info.Contact.Address.street);
	cout << "Enter your POBox: " << endl;
	cin >> Info.Contact.Address.POBOX;
	cout << "Enter your monthly salary: " << endl;
	cin >> Info.MonthlySalary;
	cout << "Enter your gender (0 = Male, 1 = Female): " << endl;
	cin >> genderInput;
	Info.Enums.Gender = static_cast<stUserEnums::enGender>(genderInput);
	cout << "Are you married 0/1 ? " << endl;
	cin >> statusInput;
	Info.Enums.Status = static_cast<stUserEnums::enStatus>(statusInput);
	cout << "Enter your favorite color : (0 = White , 1 = Black , 2 =  Red , 3 = Yellow , 4 = Blue) " << endl;
	cin >> colorInput;
	Info.Enums.FavoriteColor = static_cast<stUserEnums::enFavoriteColor>(colorInput);

}

void PrintInfo(stUser Info)
{
	const char* genderStr[] = { "Male", "Female" };
	const char* statusStr[] = { "Single", "Married" };
	const char* colorStr[] = { "White", "Black", "Red", "Yellow", "Blue" };

	cout << "\n*************************************\n";
	cout << "Name: " << Info.name << endl;
	cout << "Age: " << Info.Age << " years old" << endl;
	cout << "Phone Number: " << Info.Contact.phoneNumber << endl;
	cout << "Email Address: " << Info.Contact.emailAddress << endl;
	cout << "City: " << Info.Contact.Address.city << endl;
	cout << "Country: " << Info.Contact.Address.country << endl;
	cout << "Street Name: " << Info.Contact.Address.street << endl;
	cout << "POBOX: " << Info.Contact.Address.POBOX << endl;
	cout << "Monthly Salary: " << Info.MonthlySalary << endl;
	cout << "Yearly Salary: " << Info.MonthlySalary * 12 << endl;
	cout << "Gender: " << genderStr[Info.Enums.Gender] << endl;
	cout << "Status: " << statusStr[Info.Enums.Status] << endl;
	cout << "Favorite Color: " << colorStr[Info.Enums.FavoriteColor] << endl;
	cout << "*************************************\n";
	cin.ignore();
}
int main()
{
	stUser Person1Info;
	ReadInfo(Person1Info);
	PrintInfo(Person1Info);

	stUser Person2Info;
	ReadInfo(Person2Info);
	PrintInfo(Person2Info);

	return 0;
}

