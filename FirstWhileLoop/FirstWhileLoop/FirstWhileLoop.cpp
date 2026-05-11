

#include <iostream>
using namespace std;


int ReadNumbersInRange(int From, int To)
{
	int Number;
	

	do {
		cout << "Please enter a number between " << From << " and " << To << " ?" << endl;
		cin >> Number;
		
	} while (Number < From || Number > To);
	
	return Number;
}
int main()
{

	cout << "The number is: " << ReadNumbersInRange(1, 100) << endl;





	/*int num = 1;
	while (num <= 5)
	{                                                            //simple while loop program
		cout << num << endl;
		num++;
	}*/



	//int Number;
	//cout << "Please enter a positive number? \n";
	//cin >> Number;

	//while (Number < 0)
	//{
	//	cout << "Wrong Number! Please enter a positive number?\n";              //positive number
	//	cin >> Number;
	//}

	//cout << "\nThe number is: " << Number << endl;




	return 0;
}


