

#include <iostream>
using namespace std;

//int main()
//{
//	float grade;
//
//	cout << "Please enter your grade?" << endl;
//	cin >> grade;
//
//	if (grade >= 90)
//	{
//		cout << "A" << endl;
//	}
//	else if (grade >= 80)
//	{
//		cout << "B" << endl;
//	}
//	else if (grade >= 70)
//	{
//		cout << "C" << endl;
//	}
//	else if (grade >= 60)
//	{
//		cout << "D" << endl;
//	}
//	else if (grade >= 50)
//	{
//		cout << "E" << endl;
//	}
//	else
//	{
//		cout << "F" << endl;
//	}
//	return 0;
//}

//Another structure way 

int ReadGrade(int From, int To)
{
	int grade;
	do {
		cout << "Please enter grade from 0 t0 100: " << endl;
		cin >> grade;
	} while (grade < From || grade > To);
	return grade;
}

char GetGradeLetter(int grade) 
{
	if (grade >= 90)
		return 'A';
	else if (grade >= 80)
		return 'B';
	else if (grade >= 70)
		return 'C';
	else if (grade >= 60)
		return 'D';
	else if (grade >= 50)
		return 'E';
	else
		return 'F';
}

int main() 
{
	cout << "Result = " << GetGradeLetter(ReadGrade(0, 100)) << endl;
	return 0;
}