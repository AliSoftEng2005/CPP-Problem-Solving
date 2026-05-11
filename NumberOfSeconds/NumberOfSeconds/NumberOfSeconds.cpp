

#include <iostream>
using namespace std;

//void NumberOfSeconds()
//{
//	int TotalSeconds;
//	cout << "Please enter number of seconds: " << endl;
//	cin >> TotalSeconds;
//	
//	int SecondsPerDay = 24 * 60 * 60;
//	int SecondsPerHour = 60 * 60;
//	int SecondsPerMinutes = 60;
//
//	int NumberOfDays = round(TotalSeconds / SecondsPerDay);
//	int remainder1 = TotalSeconds % SecondsPerDay;
//	int NumberOfHours = round(remainder1 / SecondsPerHour);
//	int remainder2 = remainder1 % SecondsPerHour;
//	int NumberOfMinutes = round(remainder2 / SecondsPerMinutes);
//	int remainder3 = remainder2 % SecondsPerMinutes;
//	int NumberOfSeconds = round(remainder3);
//
//	cout << endl << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds << endl;
//}
//int main()
//{
//
//	
//	NumberOfSeconds();
//	return 0;
//}


//Another structured way 

struct stTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

float ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

stTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
	stTaskDuration TaskDuration;

	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinutes = 60;

	int Remainder = 0;

	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;
	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
	Remainder = Remainder % SecondsPerHour;
	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinutes);
	Remainder = Remainder % SecondsPerMinutes;
	TaskDuration.NumberOfSeconds = Remainder;

	return TaskDuration;
}

void PrintTaskDurationDetails(stTaskDuration TaskDuration)
{
	cout << endl;
	cout << TaskDuration.NumberOfDays << ":"
		<< TaskDuration.NumberOfHours << ":"
		<< TaskDuration.NumberOfMinutes << ":"
		<< TaskDuration.NumberOfSeconds << endl;
}

int main()
{
	int TotalSeconds = ReadPositiveNumber("Please enter the total seconds:");
	PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

	return 0;
}