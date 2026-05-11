

#include <iostream>
using namespace std;


//void Powring(int number) {
//    int pow2 = number * number;
//    int pow3 = pow2 * number;
//    int pow4 = pow3 * number;
//
//    cout << "Power of 2: " << pow2 << endl;
//    cout << "Power of 3: " << pow3 << endl;
//    cout << "Power of 4: " << pow4 << endl;
//}
//
//int main() {
//    int userInput;
//
//    cout << "Enter a number: ";
//    cin >> userInput;
//
//    Powring(userInput);
//
//    return 0;
//}

//Another structured way 

int ReadNumber() {                                             //the previos way is better but we wanna learn another structured way for long operations 
	int number;

	cout << "Please enter a number: " << endl;
	cin >> number;

	return number;
}

void Powerof2_3_4(int number) {

	int a = number * number;
	int b = number * number * number;
	int c = number * number * number * number;

	cout << a <<" " << b << " " << c << endl;

}

int main() {
	int number;

	Powerof2_3_4(ReadNumber());

	return 0;
}
