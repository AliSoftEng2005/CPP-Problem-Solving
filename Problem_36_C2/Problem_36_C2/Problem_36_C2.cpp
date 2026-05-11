

#include <iostream>
using namespace std;

//int main()
//{
//	float Num1, Num2;
//	char OperatorType;
//
//	cout << "Please enter the first number:" << endl;
//	cin >> Num1;
//	cout << "Please enter the second number:" << endl;
//	cin >> Num2;
//	cout << "Please enter the operator type: (+ , - , * , /)" << endl;
//	cin >> OperatorType;
//
//
//	switch (OperatorType) {
//	case '+':
//		cout << Num1 + Num2 << endl;
//			break;
//	case '-':
//		cout << Num1 - Num2 << endl;
//		break;
//	case '*':
//		cout << Num1 * Num2 << endl;
//		break;
//	case '/':
//		cout << Num1 / Num2 << endl;
//		break;
//		
//	default:
//		cout << "wrong operator!";
//
//	}
//		
//	return 0;
//
//}


//Another structured way 

enum enOperationType { Add = '+', Substract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string Message)
{
	float Number;
	cout << Message << endl;
	cin >> Number;

	return Number;
}

enOperationType ReadOpType()
{
	char OT = '+';

	cout << "Please enter operation type (+), (-), (*), (/): " << endl;
	cin >> OT;

	return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
	switch (OpType) {
	case enOperationType::Add:
			return Number1 + Number2;
	case enOperationType::Substract:
		return Number1 - Number2;
	case enOperationType::Multiply:
		return Number1 * Number2;
	case enOperationType::Divide:
		return Number1 / Number2;
	default:
		return Number1 + Number2;

	}
}

int main()
{
	float Number1 = ReadNumber("Please enter the first number: ");
	float Number2 = ReadNumber("Please enter the second number: ");

	enOperationType OpType = ReadOpType();

	cout << endl << "Results = " << Calculate(Number1, Number2, OpType) << endl;
	return 0;
}