

#include <iostream>
using namespace std;

//int main()
//{
//	float Mark;
//
//	cout << "Please enter your mark?" << endl;
//	cin >> Mark;
//
//	if (Mark >= 50)
//	{
//		cout << "Pass!" << endl;
//	}
//	else {
//		cout << "Fail!" << endl;
//	}
//	return 0;
//}


//Another structured way


enum enPassFail {Pass = 1, Fail = 2};

int ReadMark()
{
	int Mark;
	cout << "Please enter your mark: " << endl;
	cin >> Mark;

	return Mark;
}

enPassFail CheckMark(int Mark) {
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResults(int Mark) {

	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\nYou Passed!" << endl;
	else
		cout << "\nYou Failed!" << endl;
}

int main()
{
	PrintResults(ReadMark());
}