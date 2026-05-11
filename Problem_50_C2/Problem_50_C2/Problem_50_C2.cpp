
#include <iostream>
using namespace std;

//void WhilePINIsCorrect()
//{
//	int balance;
//	int PIN;
//
//	cout << "Please enter your balance: " << endl;
//	cin >> balance;
//
//	cout << "Please enter the PIN: " << endl;
//	cin >> PIN;
//
//
//	int i = 1;
//	while (i <= 3 && PIN != 1234)
//	{
//
//		cout << "Wrong PIN! Please enter the correct PIN: " << endl;
//		cin >> PIN;
//
//		i++;
//
//	}
//	if (i > 3) {
//
//		cout << "Your card is locked " << endl;
//	}
//	else {
//		cout << "Your balance is: " << balance << endl;
//
//	}
//		
//
//}
//
//void DoWhileLoop()
//{
//	int balance;
//	int PIN;
//	int i = 0;
//	cout << "Please enter your balance: " << endl;
//	cin >> balance;
//
//	cout << "Please enter the PIN: " << endl;
//	cin >> PIN;
//	
//	while (PIN != 1234) {
//		
//
//		i++;
//		if (i >= 3)
//		{
//			cout << "Your card is locked! \n";
//			break;
//		}
//		else if (i <= 3 && PIN == 1234)
//		{
//			cout << "Your balance is: " << balance << endl;
//			break;
//		}
//
//		cout << "Wrong PIN! Please enter the correct PIN: " << endl;
//		cin >> PIN;
//
//	} 
//
//
//
//}
//
//
//int main()
//{
//	WhilePINIsCorrect();
//	DoWhileLoop();
//
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

	for (int i = 2; i >= 0; i--)
		{
			PinCode = ReadPinCode();
			if (PinCode == "1234")
			{
				return 1;
			}
			else
			{
				cout << "\nWrong PIN!\n";
				cout << "You have " << i << " more attempts" << endl;
				system("color 4F");
			}
		} 
	return 0;
}




int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "\nYour balance is: " << 7500 << endl;
	}
	else
	{
		cout << "\nYour card is locked call the bank for help.." << endl;
	}

	return 0;
}
