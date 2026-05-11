

#include <iostream>
using namespace std;

//void SumOfEvenNumbersWhileLoop(int UserNum)
//{
//	cout << "Please enter a positive number? " << endl;
//	cin >> UserNum;
//
//	int i = 1;
//	int TheSum = 0;
//	while (i <= UserNum)
//	{
//		if (i % 2 == 0)
//		{
//			TheSum += i;
//		}
//		i++;
//	}
//	cout << "\nSum of even numbers from 1 to " << UserNum << " is " << TheSum;
//}
//int main()
//{
//	int userNum;
//	int sum = 0;
//	cout << "Please enter a positive number: " << endl;
//	cin >> userNum;
//
//	for (int Num = 0; Num <= userNum; Num++)
//	{
//		if (Num % 2 == 0)
//		{
//			sum += Num;
//		}
//	}
//	cout << "Sum of even numbers is: " << sum << endl;
//
//	SumOfEvenNumbersWhileLoop(userNum);
//	return 0;
//}

//Another Structured way

enum enOddOrEven { Odd = 1, Even = 2 };

int ReadNumber()
{
	int N;
	cout << "Please Enter A positive Number:" << endl;
	cin >> N;
	return N;
}

enOddOrEven CheckOddOrEven(int Number)
{
	if (Number % 2 != 0)

		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

int SumOfEvenNumbersWhileLoop(int N)
{
	int counter = 1;
	int TheSum = 0;
	cout << "The sum of even numbers using while loop:" << endl;

	while (counter <= N)
	{
		if (CheckOddOrEven(counter) == enOddOrEven::Even)
		{
			TheSum += counter;
		}
		counter++;
	}
	return TheSum;
}

int SumOfEvenNumbersDoWhile(int N)
{
	int counter = 1;
	int TheSum = 0;
	cout << "The sum of even numbers using do while loop:" << endl;


	do
	{
		if (CheckOddOrEven(counter) == enOddOrEven::Even)
		{
			TheSum += counter;
		}
		counter++;
	} while (counter <= N);
	return TheSum;
}

int SumOfEvenNumbersUsingFor(int N)
{
	int TheSum = 0;
	cout << "The sum of even numbers using for loop:" << endl;

	for (int counter = 1; counter <= N; counter++)
	{
		if (CheckOddOrEven(counter) == enOddOrEven::Even)
		{
			TheSum += counter;
		}
	}
	return TheSum;
}

int main()
{
	int N = ReadNumber();

	cout << SumOfEvenNumbersWhileLoop(N) << endl;
	cout << SumOfEvenNumbersDoWhile(N) << endl;
	cout << SumOfEvenNumbersUsingFor(N) << endl;

	return 0;
}


