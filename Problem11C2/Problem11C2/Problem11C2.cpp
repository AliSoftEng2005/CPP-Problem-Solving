

#include <iostream>
using namespace std;

//int main()
//{
//	float Mark1, Mark2, Mark3;
//	float Average;
//	
//
//	cout << "Please enter your first mark?" << endl;
//	cin >> Mark1;
//	cout << "Please enter your second mark?" << endl;
//	cin >> Mark2;
//	cout << "Please enter your third mark?" << endl;
//	cin >> Mark3;
//	Average = (Mark1 + Mark2 + Mark3) / 3;
//
//	if (Average >= 50)
//	{
//		cout << "Your Average Mark Is: " << Average << endl;
//		cout << "Pass!" << endl;
//	}
//	else {
//		cout << "Fail!" << endl;
//	}
//	return 0;
//}

//Another structured way 


enum enPassFail {Pass = 1, Fail = 2 };

int ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please enter your first mark: " << endl;
	cin >> Mark1;
	cout << "Please enter your second mark: " << endl;
	cin >> Mark2;
	cout << "Please enter your third mark: " << endl;
	cin >> Mark3;

	return Mark1, Mark2, Mark3;
}

int SumOfMarks(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float CalculateOfAverage(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOfMarks(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckAverage(float Average)
{
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResults(float Average)
{
	cout << "\nThe average mark is: " << Average << endl;

	if (CheckAverage(Average) == enPassFail::Pass)
		cout << "\nYou Passed!" << endl;
	else
		cout << "\nYou Failed!" << endl;
}

int main()
{
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResults(CalculateOfAverage(Mark1, Mark2, Mark3));
	return 0;
}
