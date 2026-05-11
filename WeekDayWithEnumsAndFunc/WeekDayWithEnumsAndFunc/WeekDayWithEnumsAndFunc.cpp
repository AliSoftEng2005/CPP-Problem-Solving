

#include <iostream>
using namespace std;


enum enWeekDays { sun = 1, mon = 2, tues = 3, wed = 4, thur = 5, fri = 6, satu = 7 };

void showWeekDaysMenu()
{
	cout << "***************************\n";
	cout << "          Week Day           "<<endl;
	cout << "***************************\n";
	cout << "(1) Sunday" << endl;
	cout << "(2) Monday" << endl;
	cout << "(3) Tuesday" << endl;
	cout << "(4) Wednesday" << endl;
	cout << "(5) Thursday" << endl;
	cout << "(6) Friday" << endl;
	cout << "(7) Saturday" << endl;
	cout << "***************************\n";
	cout << "Choose the number od the day:" << endl;
}
enWeekDays ReadDayInput()
{
	int WD;
	cin >> WD;
	return (enWeekDays)WD;
}
string PrintDayInput(enWeekDays WeekDay)
{
	switch (WeekDay)
	{
	case enWeekDays::sun:
		return "Sunday";
		break;
	case enWeekDays::mon:
		return "Monday";
		break;
	case enWeekDays::tues:
		return "Tuesday";
		break;
	case enWeekDays::wed:
		return "Wednesday";
		break;
	case enWeekDays::thur:
		return "Thursday";
		break;
	case enWeekDays::fri:
		 return "Friday";
		break;
	case enWeekDays::satu:
		return "Saturday";
		break;
	default:
		return "Wrong Day!";
	}
}
int main()
{
	showWeekDaysMenu();

	cout << "Today is " << PrintDayInput(ReadDayInput()) << endl;
	return 0;
}