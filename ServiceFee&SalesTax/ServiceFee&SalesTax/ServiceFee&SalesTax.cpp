

#include <iostream>
using namespace std;

//int main()
//{
//	float BillValue;
//
//	cout << "Please enter the bill value: " << endl;
//	cin >> BillValue;
//	
//	float TotalBill = BillValue * 1.1;
//	float TotalBill2 = TotalBill * 1.16;
//
//	cout << "Total Bill is: " << TotalBill2 << endl;
//
//	return 0;
//}

//Another structured way

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

float CalculateTotalBill(float TotalBill)
{
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;

	return TotalBill;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Please enter the total bill:");

	cout << endl;
	cout << "Total Bill: " << TotalBill << endl;
	cout << "The final total bill is: "<<CalculateTotalBill(TotalBill);

	return 0;
}


