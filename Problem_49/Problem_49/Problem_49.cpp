

#include <iostream>
using namespace std;

//int main()
//{
//	int PIN;
//	int Balance;
//
//	cout << "Please enter PIN? " << endl;
//	cin >> PIN;
//	
//	if (PIN == 1234)
//	{
//		cout << "Please enter your balance? " << endl;
//		cin >> Balance;
//		cout << "Your balance is: " << Balance << endl;
//	}
//	else {
//		cout << "Wrong PIN!" << endl;
//	}
//	return 0;
//}

string ReadPinCode()
{
	string PinCode;

	cout << "Please enter the PIN? " << endl;
	cin >> PinCode;

	return PinCode;
}

bool Login()
{
	string PinCode;

	do
	{
		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			return 1;
		}
		else
		{
			cout << "\nWrong PIN!\n";
			system("color 4F");
		}
	} while (PinCode != "1234");

	return 0;
}

int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "\nYour balance is: " << 7500 << endl;
	}

	return 0;
}