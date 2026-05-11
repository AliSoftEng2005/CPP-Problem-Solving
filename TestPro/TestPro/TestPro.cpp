

#include <iostream>
using namespace std;

int main()
{
	/*int A = 30;
	int B = 20;

	cout << A << B << endl;

	A = B++;
	B = A++;

	cout << A << B << endl;

	A = ++B;
	B = ++A;
	cout << A << B << endl;

	A += B;
	B *= A;
	cout << A << B << endl;*/


	/*int A, B;

	cout << "Please enter the first number A: " << endl;
	cin >> A;
	cout << "Please enter the second number B: " << endl;
	cin >> B;

	cout <<endl << A << " = " << B << " is " << (A == B) << endl;
	cout << A << " != " << B << " is " << (A != B) << endl;
	cout << A << " > " << B << " is " << (A > B) << endl;
	cout << A << " < " << B << " is " << (A < B) << endl;
	cout << A << " >= " << B << " is " << (A >= B) << endl;
	cout << A << " <= " << B << " is " << (A <= B) << endl;*/

	//cout << "Logical Operator: \n";
	//cout << (12 >= 12) << endl; //1
	//cout << (12 > 7) << endl;   //1
	//cout << (8 < 6) << endl;    //0
	//cout << (8 == 8) << endl;   //1
	//cout << (12 <= 12) << endl; //1
	//cout << (7 == 5) << endl;   //0

	//cout << endl << "NOT operation\n";

	//cout << !(12 >= 12) << endl; //0
	//cout << !(12 < 7) << endl;   //1
	//cout << !(8 < 6) << endl;    //1
	//cout << !(8 == 8) << endl;   //0
	//cout << !(12 <= 12) << endl; //0
	//cout << !(7 == 5) << endl;   //1

	//cout << endl << "AND, OR ,NOT operation\n";

	//cout << (1 && 1) << endl;  //1
	//cout << (1 && 0) << endl;  //0
	//cout << (0 || 1) << endl;  //1
	//cout << (0 || 0) << endl;  //0
	//cout << !(0) << endl;      //1
	//cout << !(0 || 1) << endl; //0

	//cout << endl << "AND, OR ,NOT,with logical operators\n";

	//cout << ((7 == 7) && (7 > 5)) << endl; //1
	//cout << ((7 == 7) && (7 < 5)) << endl; //0
	//cout << ((7 == 7) || (7 < 5)) << endl; //1
	//cout << ((7 < 7) || (7 > 5)) << endl;  //1
	//cout << !((7 == 7) && (7 > 5)) << endl;//0 
	//cout << ((7 == 7) && !(7 < 5)) << endl; //1



	cout << ((5 > 6 && 7 == 7) || (1 || 0)) << endl;                        //1
	cout << !((5 > 6 && 7 == 7) || (1 || 0)) << endl;                       //0
	cout << (!(5 > 6 && 7 == 7) || !(1 || 0)) << endl;                      //1
	cout << (!(5 > 6 || 7 == 7) && !(1 || 0)) << endl;                      //0
	cout << (((5 > 6 && 7 <= 8) || (1 > 8 && 4 <= 3) && (1))) << endl;      //0
	cout << ((((5 > 6 && !(7 <= 8)) && (1 > 8 || 4 <= 3) || (1)))) << endl; //1

	return 0;

}


