

#include <iostream>
using namespace std;

//void FactorialUsingWhileLoop(int UserNum)
//{
//	cout << "Please enter a positive Number: " << endl;
//	cin >> UserNum;
//
//
//	while (UserNum < 0)
//	{
//		cout << "Wrong Number Please enter a positive number: " << endl;
//		cin >> UserNum;
//	}
//	int i = 1;
//	unsigned long long Factorial = 1;
//	while (i <= UserNum)
//	{
//		Factorial *= i;
//		i++;
//	}
//	cout << "Factorial of " << UserNum << " is " << Factorial;
//}
//
//int main()
//{
//	int userNum;
//	unsigned long long factorial = 1;
//
//	cout << "Please enter a positive number: " << endl;
//	cin >> userNum;
//
//	for (int Num = 1; Num <= userNum; Num++)
//	{
//		factorial *= Num;
//	}
//	cout << "the factorial of " << userNum << " is " << factorial << endl;
//
//	cout << "\nUsing While Loop:\n";
//	FactorialUsingWhileLoop(userNum);
//
//	return 0;
//}


//Another Structure Way

int ReadPositiveNumber(string Message)
{
	int Number;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;

}

int Factorial(int N)
{
	int F = 1;

	for (int counter = N; counter >= 1; counter--)
	{
		F = F * counter;
	}
	return F;
}

int main()
{
	cout << Factorial(ReadPositiveNumber("Please enter a positive Number: "))<<endl;
	return 0;
}