

#include <iostream>
using namespace std;

//int main()
//{
//	int month;
//
//	cout << "Please enter a number from 1 to 12 :" << endl;
//	cin >> month;
//
//	switch (month) {
//	case 1:
//		cout << "January" << endl;
//		break;
//	case 2:
//		cout << "February" << endl;
//		break;
//	case 3:
//		cout << "March" << endl;
//		break;
//	case 4:
//		cout << "April" << endl;
//		break;
//	case 5:
//		cout << "May" << endl;
//		break;
//	case 6:
//		cout << "June" << endl;
//		break;
//	case 7:
//		cout << "July" << endl;
//		break;
//	case 8:
//		cout << "August" << endl;
//		break;
//	case 9:
//		cout << "September" << endl;
//		break;
//	case 10:
//		cout << "October" << endl;
//		break;
//	case 11:
//		cout << "November" << endl;
//		break;
//	case 12:
//		cout << "December" << endl;
//		break;
//	}
//	
//	return 0;
//}

//Another structured way 

enum enMonthOfYear {Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, 
	Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12};

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

enMonthOfYear ReadMonthOfYear()
{
	return (enMonthOfYear)ReadNumberInRange("Please enter number of month [1 to 12]", 1, 12);
}

string GetMonthOfYear(enMonthOfYear Month)
{
	switch (Month)
	{
	case enMonthOfYear::Jan:
		return "January";
	case enMonthOfYear::Feb:
		return "February";
	case enMonthOfYear::Mar:
		return "March";
	case enMonthOfYear::Apr:
		return "April";
	case enMonthOfYear::May:
		return "May";
	case enMonthOfYear::Jun:
		return "June";
	case enMonthOfYear::Jul:
		return "July";
	case enMonthOfYear::Aug:
		return "August";
	case enMonthOfYear::Sep:
		return "September";
	case enMonthOfYear::Oct:
		return "October";
	case enMonthOfYear::Nov:
		return "November";
	case enMonthOfYear::Dec:
		return "December";
	default:
		return "It is not a valid month!";

	}
}

int main()
{
	cout << GetMonthOfYear(ReadMonthOfYear()) << endl;

	return 0;
}

