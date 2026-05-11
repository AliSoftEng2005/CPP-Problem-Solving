

#include <iostream>
using namespace std;

//int main()
//{
//	int Day;
//
//
//	cout << "Please enter number from 1 to 7" << endl;
//	cin >> Day;
//
//
//	switch (Day)
//	{
//	case 1:
//		cout << "It's Sunday!" << endl;
//		break;
//	case 2:
//		cout << "It's Monday!" << endl;
//		break;
//	case 3:
//		cout << "It's Tuesday!" << endl;
//		break;
//	case 4:
//		cout << "It's Wednesday!" << endl;
//		break;
//	case 5:
//		cout << "It's Thursday!" << endl;
//		break;
//	case 6:
//		cout << "It's Friday!" << endl;
//		break;
//	case 7:
//		cout << "It's Saturday!" << endl;
//		break;
//	default:
//		cout << "wrong day!" << endl;
//
//	}
//	
//	return 0;
//}

//Another structured way 

enum enDayOfWeek {Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7};

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

enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Please enter the number of the day: Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day)
{
	switch (Day) {
	case enDayOfWeek::Sat:
		return "Saturday";
	case enDayOfWeek::Sun:
		return "Sunday";
	case enDayOfWeek::Mon:
		return "Monday";
	case enDayOfWeek::Tue:
		return "Tuesday";
	case enDayOfWeek::Wed:
		return "Wednesday";
	case enDayOfWeek::Thu:
		return "Thursday";
	case enDayOfWeek::Fri:
		return "Friday";
	default:
		return "Wrong Day!";
	}
}

int main()
{
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
	return 0;
}





