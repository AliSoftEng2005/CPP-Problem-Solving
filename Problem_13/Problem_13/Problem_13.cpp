

#include <iostream>
using namespace std;


void ReadNumbers(int& A, int& B, int& C)
{
	cout << "Please enter the first number: " << endl;
	cin >> A;
	cout << "Please enter the second number: " << endl;
	cin >> B;
	cout << "Please enter the third number: " << endl;
	cin >> C;

}

int MaxOfNumbers(int A, int B, int C)
{
	if (A > B)
		if (A > C)
			return A;
		else
			return C;

	else
		if (B > C)
		return B;
	else
		return C;
}

void PrintResults(int Max)
{
	cout << "The max of the three numbers is: " <<Max << endl;
}
int main()
{
	int A, B, C;
	ReadNumbers(A, B, C);
	PrintResults(MaxOfNumbers(A, B, C));

	return 0;
}


