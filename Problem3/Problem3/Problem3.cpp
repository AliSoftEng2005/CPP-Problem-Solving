

#include <iostream>
using namespace std;

enum enNumberType {Odd=1, Even=2};

int ReadNumber()
{
	int Num;
	cout << "Please enter a number: " << endl;
	cin >> Num;
	return Num;

}

enNumberType CheckNumberType(int Num)
{
	int Result = Num % 2;
	if (Result == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;

}
void PrintNumberType(enNumberType NumberType)
{
	if (NumberType == enNumberType::Even)
		cout << "\nYour number is Even" << endl;
	else
		cout << "\nYour number is Odd" << endl;
}
int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));
	return 0;
}


