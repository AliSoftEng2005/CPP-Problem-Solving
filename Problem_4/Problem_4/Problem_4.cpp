

#include <iostream>
using namespace std;

//int main()
//{
//    int Age;
//    bool DriverLicense;
//
//    cout << "How old are you?" << endl;
//    cin >> Age;
//    cout << "Do you have a driver license 0/1 ?" << endl;
//    cin >> DriverLicense;
//
//    if (Age >= 21 && DriverLicense)
//    {
//        cout << "You are excepted!" << endl;
//    }
//    else
//    {
//        cout << "Sorry! you do not meet the requirements." << endl;
//
//    }
//    return 0;
//}



//Another Structured Way, problem 4 and 5 where problem 5 there is a new condition which is Recommendation.

struct stInfo {
	int Age;
	bool HasDriverLicense;
	bool HasRecommendation;
};

stInfo ReadInfo() {

	stInfo Info;

	cout << "How Old Are You? " << endl;
	cin >> Info.Age;
	cout << "Do you have a driver license? 0/1 " << endl;
	cin >> Info.HasDriverLicense;
	cout << "Do you have a recommendation?" << endl;
	cin >> Info.HasRecommendation;

	return Info;
}

bool IsAccepted(stInfo Info) {
	if (Info.HasRecommendation)
		return true;
	else
		return (Info.Age > 21 && Info.HasDriverLicense);
}

void PrintResult(stInfo Info) {
	if (IsAccepted(Info))
		cout << "\nHired!";
	else
		cout << "\nRejected!";

}

int main() 
{
	PrintResult(ReadInfo());
	return 0;
}