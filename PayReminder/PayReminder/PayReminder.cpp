

#include <iostream>
using namespace std;

//int main()
//{
//	float TotalBill;
//	float CashPaid;
//
//	cout << "How much cash paid? " << endl;
//	cin >> CashPaid;
//
//	cout << "enter total bill? " << endl;
//	cin >> TotalBill;
//
//	float CashBack = CashPaid - TotalBill;
//	cout << "cash back is: " << CashBack << endl;
//}

//Another structured way 

float ReadPositiveNumber(string Message)
{
	float Number ;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

float CalculatePayRemainder(float TotalBill, float TotalCashPaid)
{
	return TotalCashPaid - TotalBill;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Please enter the total bill: ");
	float TotalCashPaid = ReadPositiveNumber("Please enter the total cash paid: ");

	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << TotalCashPaid << endl;

	cout << endl << "****************************" << endl;
	cout << "The Remainder = " << CalculatePayRemainder(TotalBill, TotalCashPaid) << endl;

	return 0;
}