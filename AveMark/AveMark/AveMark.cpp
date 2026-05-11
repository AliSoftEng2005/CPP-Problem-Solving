

#include <iostream>
using namespace std;


//int main()
//{
//    float mark1;
//    float mark2;
//    float mark3;
//
//    
//
//    cout << "Please enter the first mark: " << endl;
//    cin >> mark1;
//
//    cout << "Please enter the second mark: " << endl;
//    cin >> mark2;
//
//    cout << "Please enter the second mark: " << endl;
//    cin >> mark3;
//
//    float Average = (mark1 + mark2 + mark3) / 3.0;
//    cout << "\nYour Average mark is: " << Average << endl;
//
//
//    return 0;
//}


//Another structured way 

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

void PrintResults(float Average)
{
	cout << "\nThe average mark is: " << Average << endl;
}

int main()
{
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResults(CalculateOfAverage(Mark1, Mark2, Mark3));
	return 0;
}