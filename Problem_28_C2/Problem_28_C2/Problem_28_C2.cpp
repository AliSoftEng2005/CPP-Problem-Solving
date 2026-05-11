

#include <iostream>

using namespace std;

//void SumOfOddNumbersWhileLoop(int UserNum)
//{
//    cout << "Please enter a positive number? " << endl;
//    cin >> UserNum;
//
//    int i = 1;
//    int TheSum = 0;
//    while (i <= UserNum)
//    {
//        if (i % 2 != 0)
//        {
//            TheSum += i;
//        }
//        i++;
//    }
//    cout << "\nSum of add numbers from 1 to " << UserNum << " is " << TheSum;
//}
//
//int main()
//{
//    int userNum;
//    int sum = 0;
//
//    cout << "Please enter a positive number: " << endl;
//    cin >> userNum;
//    for (int Num = 1; Num <= userNum; Num=Num++)
//    {
//        if (Num % 2 != 0)
//        {
//            sum += Num;
//        }
//    }
//    cout << "\nSum of add numbers from 1 to " << userNum << " is " << sum << endl;
//
//    SumOfOddNumbersWhileLoop(userNum);
//   
//    return 0;
//
//}
//
//

//Another Structured Way

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

int SumOfOddNumbersWhileLoop(int N)
{
	int counter = 0;
	int TheSum = 0;
	cout << "The sum of odd numbers using while loop:" << endl;

	while (counter < N)
	{
		if (CheckOddOrEven(counter) == enOddOrEven::Odd)
		{
			TheSum += counter;
		}
		counter++;
	}
	return TheSum;
}

int SumOfOddNumbersDoWhile(int N)
{
	int counter = 0;
	int TheSum = 0;
	cout << "The sum of odd numbers using do while loop:" << endl;


	do
	{
		if (CheckOddOrEven(counter) == enOddOrEven::Odd)
		{
			TheSum += counter;
		}
		counter++;
	} while (counter < N);
	return TheSum;
}

int SumOfNOddNumbersUsingFor(int N)
{
	int TheSum = 0;
	cout << "The sum of odd numbers using for loop:" << endl;

	for (int counter = 1; counter <= N; counter++)
	{
		if (CheckOddOrEven(counter) == enOddOrEven::Odd)
		{
			TheSum += counter;
		}
	}
	return TheSum;
}

int main()
{
	int N = ReadNumber();

	cout<< SumOfOddNumbersWhileLoop(N)<<endl;
	cout<< SumOfOddNumbersDoWhile(N)<<endl;
	cout << SumOfNOddNumbersUsingFor(N) << endl;

	return 0;
}