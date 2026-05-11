

#include <iostream>
#include <string>
using namespace std;


//int main()
//{
//	int UserInput;
//	int Sum = 0;
//
//	cout << "Please enter a number: " << endl;
//	cin >> UserInput;
//
//	while (UserInput != -99)
//	{
//		Sum += UserInput;
//		cout << "enter a number: " << endl;
//		cin >> UserInput;
//	}
//
//	cout << "The sum of your numbers is: " << Sum << endl;
//
//	return 0;
//}


//Another structured way 

float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;

	return Number;
}

float SumNumbers()
{
	int Sum = 0, Number = 0, Counter = 1;

	do {
		Number = ReadNumber("Please enter a number " + to_string(Counter));

		if (Number == -99)
		{
			break;
		}

		Sum += Number;
		Counter++;

	} while (Number != -99);

	return Sum;
}

int main()
{
	cout << endl << "Result = " << SumNumbers() << endl;

	return 0;
}