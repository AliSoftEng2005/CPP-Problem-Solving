

#include <iostream>
using namespace std;

int main()
{
	int userNum;
	cout << "Please enter a number:" << endl;
	cin >> userNum;
	
	cout << "\nfor loop:\n";

	for (int Num = 1; Num <= userNum; Num++)
	{
		cout << Num << endl;
	}

	cout << "\nWhile loop:" << endl;

	int i = 1;
	while (userNum >= i)
	{
		cout << i << endl;
		i++;
	}
	return 0;

}
