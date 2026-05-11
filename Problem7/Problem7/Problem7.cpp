
#include <iostream>
using namespace std;
#include <string>
//int main()
//{
//	float Number;
//
//	cout << "Please enter a number to give you the half of it: " << endl;
//	cin >> Number;
//
//	cout << "\nHalf of " << Number << " is " << Number / 2 << endl;
//
//
//
//
//
//
//	return 0;
//}

//Another structured way 

int ReadNumber() {
	int Num;
	cout << "Please enter a number: " << endl;
	cin >> Num;
	return Num;
}

float CalculateHalfNum(int Num) {

	return (float) Num / 2;
}

void PrintResults(int Num) {

	cout << "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNum(Num));
}

int main() 
{
	PrintResults(ReadNumber());
	return 0;
}