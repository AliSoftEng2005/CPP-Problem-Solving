

#include <iostream>
using namespace std;

//int main()
//{
//	int pennies, nickels, dimes, quarters, dollars;
//
//	cout << "Please enter how many pennies: " << endl;
//	cin >> pennies;
//	cout << "Please enter how many nickels: " << endl;
//	cin >> nickels;
//	cout << "Please enter how many dimes: " << endl;
//	cin >> dimes;
//	cout << "Please enter how many quarters: " << endl;
//	cin >> quarters;
//	cout << "Please enter how many dollars: " << endl;
//	cin >> dollars;
//
//	float TotalPennies = (pennies * 1) + (nickels * 5) + (dimes * 10) + (quarters * 25) + (dollars * 100);
//	float TotalDollars = TotalPennies / 100;
//
//	cout << "\nTotal Pennies is: " << TotalPennies << endl;
//	cout << "Total Dollars is: " << TotalDollars << endl;
//
//	return 0;
//
//}

//Another structured way 

struct stPiggyBankContent 
{
	int pennies, nickels, dimes, quarters, dollars;
};

stPiggyBankContent ReadPiggyBankContent() 
{
	stPiggyBankContent PiggyBankContent;
	cout << "Please enter the total pennies: " << endl;
	cin >> PiggyBankContent.pennies;
	cout << "Please enter the total nickels: " << endl;
	cin >> PiggyBankContent.nickels;
	cout << "Please enter the total dimes: " << endl;
	cin >> PiggyBankContent.dimes;
	cout << "Please enter the total quarters: " << endl;
	cin >> PiggyBankContent.quarters;
	cout << "Please enter the total dollars: " << endl;
	cin >> PiggyBankContent.dollars;

	return PiggyBankContent;

}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
	int TotalPennies;

	TotalPennies = PiggyBankContent.pennies * 1 + PiggyBankContent.nickels * 5 + PiggyBankContent.dimes * 10
		+ PiggyBankContent.quarters * 25 + PiggyBankContent.dollars * 100;

	return TotalPennies;
}

int main()
{
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

	cout << endl << "Total pennies is: " << TotalPennies << endl;
	cout << endl << "Total dollars is: " << (float)TotalPennies / 100 << endl;

	return 0;
}

