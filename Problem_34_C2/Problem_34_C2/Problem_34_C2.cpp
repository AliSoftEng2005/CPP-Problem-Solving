

#include <iostream>
using namespace std;

//int main()
//{
//	double TotalSales;
//	cout << "Please enter how much your total sales?" << endl;
//	cin >> TotalSales;
//
//	if (TotalSales >= 1000000)
//	{
//		cout << "Your commission is: " << TotalSales * 0.01 << endl;
//	}
//	else if (TotalSales >= 500000)
//	{
//		cout << "Your commission is: " << TotalSales * 0.02 << endl;
//	}
//	else if (TotalSales >= 100000)
//	{
//		cout << "Your commission is: " << TotalSales * 0.03 << endl;
//	}
//	else if (TotalSales >= 50000)
//	{
//		cout << "Your commission is: " << TotalSales * 0.05 << endl;
//	}
//	else 
//	{
//		cout << "Your commission is 0% " << endl;
//	}
//	return 0;
//}

//Another structured way 

float ReadTotalSales()
{
	float TotalSales;
	cout << "Please enter your total sales: " << endl;
	cin >> TotalSales;
	return TotalSales;
}

float GetComissionPercentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}

float CalculateTotalSales(float TotalSales)
{
	return GetComissionPercentage(TotalSales) * TotalSales;
}

int main()
{
	float TotalSales = ReadTotalSales();

	cout << endl << "Comission Percentage: " << GetComissionPercentage(TotalSales);
	cout << endl << "Total Comission: " << CalculateTotalSales(TotalSales);
	return 0;
}

