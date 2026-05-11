#include <iostream>
using namespace std;


int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

bool isPerfectNumber(int Number)
{
	int Sum = 0; 

	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum += i; 
	}

	
	return Number == Sum;
}

void PrintPerfectNumber(int Number)
{
	if (isPerfectNumber(Number))
		cout << Number << " is a perfect number." << endl;
	else
		cout << Number << " is NOT a perfect number." << endl;
	
}

int main()
{
	PrintPerfectNumber(ReadPositiveNumber("Please enter a positive number: "));
	return 0;
}

