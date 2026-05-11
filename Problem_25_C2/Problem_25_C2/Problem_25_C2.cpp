

#include <iostream>
using namespace std;

int ReadAge()
{
	int Age;
	cout << "Please enter your age: " << endl;
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

bool ReadAgeUntilBetween(int From, int To)
{
	int Age = 0;

	do
	{
		Age = ReadAge();

	} while (!ValidateNumberInRange(Age, From, To));

		return Age;

}


void PrintResults(int Age)
{
	
	cout << "Your age is valid!" << endl;

}

int main()
{
	PrintResults(ReadAgeUntilBetween(18, 45));
	return 0;
}

