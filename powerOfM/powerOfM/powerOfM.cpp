

#include <iostream>
#include <cmath>
using namespace std;

//int PowerOfM(int Number, int Power)
//{
//	return pow(Number, Power);
//}
//
//int main()
//{
//	int Number;
//	int Power;
//
//	cout << "Please enter a number: " << endl;
//	cin >> Number;
//
//	cout << "Please enter the power of the number: " << endl;
//	cin >> Power;
//
//	cout << "\n" << Number << " power of " << Power << " is: " << PowerOfM(Number,Power) << endl;
//
//	return 0;
//}

//Another structured way

int ReadNumber() {
	int number;
	cout << "Please enter a number: " << endl;
	cin >> number;

	return number;
}

int ReadPower()
{
	int number;
	cout << "Please enter the power number:\n";
	cin >> number;

	return number;
}

int PowerNumber(int number, int M)
{
	if (M == 0)
	{
		return 1;
	}

	int P = 1;
	for (int i = 1; i <= M; i++)
	{
		P = P * number;
	}

	return P;
}

int main()
{
	cout << endl << "Result: = " << PowerNumber(ReadNumber(), ReadPower());
	return 0;
}