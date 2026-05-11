

#include <iostream>
using namespace std;

//int main()
//{
//    float NumberOfHours;
//
//    cout << "Enter how many hours: " << endl;
//    cin >> NumberOfHours;
//
//    float Days = NumberOfHours / 24.0;
//    float Weeks = Days / 7.0;
//    
//    
//    cout << "\nWeeks: " << Weeks << endl;
//    cout << "Days: " << Days << endl;
//    return 0;
//}

//Another structured way 

float ReadPositiveNumber(string Message) {
	float Number =0;
	
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;

}

float HoursToDays(float NumberOfHours)
{
	return (float)NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours)
{
	return (float)NumberOfHours / 24 / 7;
}

float DaysToWeeks(float NumberOfDays)
{
	return (float)NumberOfDays / 7;
}

int main() 
{
	float NumberOfHours = ReadPositiveNumber("Please enter the number of hours? ");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks(NumberOfDays);

	cout << endl;
	cout << "Number of Hours = " << NumberOfHours << endl;
	cout << "Number of Days = " << NumberOfDays << endl;
	cout << "Number of Weeks = " << HoursToWeeks(NumberOfHours) << endl;

	return 0;
}


