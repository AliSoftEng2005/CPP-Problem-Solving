

#include <iostream>
#include <string>
using namespace std;

//void displayMyCardInfo()
//{
//	cout << "**************************************" << endl;
//	cout << "Name: Mohammed Abu_Hadhoud." << endl;
//	cout << "Age: 44 Years." << endl;
//	cout << "City: Amman." << endl;
//	cout << "Country: Jordon." << endl;
//	cout << "**************************************" << endl;
//}
//
//void printSquareStarts()
//{
//	cout << "**********" << endl;
//	cout << "**********" << endl;
//	cout << "**********" << endl;
//	cout << "**********" << endl;
//
//}
//
//void printILoveProgramming()
//{
//	cout << "I love Programming!" << endl << endl;
//	cout << "I promise to be the best developer ever!" << endl << endl;
//	cout << "I know it will take some time to practice, but I will achieve my goal." << endl << endl;
//	cout << "Best Regards.\n" << "Ali Omar Bakhateeb." << endl;
//}
//
//void printHLetter()
//{
//	cout << "*         *" << endl;
//	cout << "*         *" << endl;
//	cout << "***********" << endl;
//	cout << "*         *" << endl;
//	cout << "*         *" << endl;
//
//}

void mySumProcedure()
{
	int Num1;
	int Num2;

	cout << "Please enter Number1?" << endl;
	cin >> Num1;

	cout << "Please enter Number2?" << endl;
	cin >> Num2;
	cout << "********************************" << endl;
	cout << Num1+Num2 << endl;

}

int mySumFunction()
{
	int Num1;
	int Num2;

	cout << "Please enter Number1?" << endl;
	cin >> Num1;

	cout << "Please enter Number2?" << endl;
	cin >> Num2;
	cout << "********************************" << endl;
	
	return Num1 + Num2;
	
}

int main()
{
	/*displayMyCardInfo();
	cout << "\n";
	printSquareStarts();
	cout << "\n";
	printILoveProgramming();
	cout << "\n";
	printHLetter();
	cout << "\n";*/
	mySumProcedure();
	cout << mySumFunction() << endl;
	
	return 0;
}

