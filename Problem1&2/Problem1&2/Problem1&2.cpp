

#include <iostream>
#include <string>

using namespace std;

//void printMyName() //problem1
//{
//	cout << "Ali Omar Abdullah Bakhateeb." << endl;
//
//}

void userName() //problem2
{
	string Name;
	cout << "Please enter your name:" << endl;
	getline(cin, Name);
	cout <<"\nYour name is: " << Name << endl;
}


int main()
{
	//printMyName();

	userName(); 

	return 0;
}

