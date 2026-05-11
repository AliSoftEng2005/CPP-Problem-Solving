

#include <iostream>
using namespace std;

void ReadGrades(float grade[3])
{
	cout << "Enter the first grade? \n";
	cin >> grade[0];
	cout << "Enter the second grade? \n";
	cin >> grade[1];
	cout << "Enter the third  grade? \n";
	cin >> grade[2];
}

float Average(float grade[3])
{
	return (grade[0] + grade[1] + grade[2]) / 3;
}

int main()
{
	float grade[3];

	ReadGrades(grade);
	
	cout << "****************************" << endl;
	cout << "The average grade is: " << Average(grade) << endl;

	return 0;
}
