

#include <iostream>
using namespace std;


//int main()
//{
//	int A;
//	int B;
//	int C;
//	
//
//	cout << "Please enter the first number:" << endl;
//	cin >> A;
//
//	cout << "Please enter the second number:" << endl;
//	cin >> B;
//
//	cout << "Please enter the third number:" << endl;
//	cin >> C;
//
//	int sum = A + B + C;
//
//	cout << "\nThe sum of your number is: " << sum << endl;
//
//	return 0;
//
//}

//Another structured way 


int ReadNumber(int& Num1, int& Num2, int& Num3) 
{

	cout << "Please enter the first number: " << endl;
	cin >> Num1;
	cout << "Please enter the second number: " << endl;
	cin >> Num2;
	cout << "Please enter the third number: " << endl;
	cin >> Num3;

	return Num1, Num2, Num3;

}

int SumOfNumbers(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}

void PrintResults(int Total) 
{
	cout << "The total sum of the numbers " << Total << endl;

}

int main()
{
	int Num1, Num2, Num3;
	ReadNumber(Num1, Num2, Num3);
	PrintResults(SumOfNumbers(Num1, Num2, Num3));

	return 0;
}