

#include <iostream>
using namespace std;

// Function to calculate total seconds
//int DurationOfSeconds(float days, float hours, float minutes, float seconds)
//{
//    float totalSeconds = (days * 24 * 60 * 60) +
//        (hours * 60 * 60) +
//        (minutes * 60) +
//        seconds;
//
//    return static_cast<int>(totalSeconds); 
//}
//
//int main()
//{
//    float days, hours, minutes, seconds;
//
//    cout << "Please enter how many days: ";
//    cin >> days;
//    cout << "Please enter how many hours: ";
//    cin >> hours;
//    cout << "Please enter how many minutes: ";
//    cin >> minutes;
//    cout << "Please enter how many seconds: ";
//    cin >> seconds;
//
//    int totalSeconds = DurationOfSeconds(days, hours, minutes, seconds);
//
//    cout << "Total Seconds is: " << totalSeconds << " Seconds" << endl;
//
//    return 0;
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

stTaskDuration ReadDurationTask()
{
	stTaskDuration TaskDuration;

	TaskDuration.NumberOfDays = ReadPositiveNumber("Please enter how many days? ");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter how many hours? ");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please enter how many Minutes? ");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please enter how many seconds? ");

	return TaskDuration;
}

int TaskDurationInSeconds(stTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;

	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;

	return DurationInSeconds;

}

int main()
{
	cout << "\nTask Duration In Seconds = " << TaskDurationInSeconds(ReadDurationTask());
	cout << endl;

	return 0;
}







