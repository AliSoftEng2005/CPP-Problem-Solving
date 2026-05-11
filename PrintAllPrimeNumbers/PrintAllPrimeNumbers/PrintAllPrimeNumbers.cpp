#include <iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string Message)
{
	int Number;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

enPrimeNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);

	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbers(int Number)
{
	cout << endl;
	cout << "The prime numbers from " << 1 << " to " << Number << " are: " << endl;
	for (int i = 1; i <= Number; i++)
	{

		if (CheckPrime(i) == enPrimeNotPrime::Prime)
		{
			cout << i << endl;
		}
	}

}

int main()
{
	PrintPrimeNumbers(ReadPositiveNumber("Please enter a positive number: "));
	return 0;
}


