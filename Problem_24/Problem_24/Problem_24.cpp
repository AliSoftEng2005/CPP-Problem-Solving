

#include <iostream>
using namespace std;

//int main()
//{
//	int Age;
//
//	cout << "Enter your age:" << endl;
//	cin >> Age;
//
//	if (Age >= 18 && Age <= 45)
//	{
//		cout << "Valid Age!" << endl;
//	}
//	else {
//		cout << "Invalid Age!" << endl;
//	}
//	return 0;
//}

//Another structured useful way

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

void PrintResults(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is a valid age!" << endl;
	else
		cout << Age << " is invalid age!" << endl;
}

int main()
{
	PrintResults(ReadAge());
	return 0;
}
