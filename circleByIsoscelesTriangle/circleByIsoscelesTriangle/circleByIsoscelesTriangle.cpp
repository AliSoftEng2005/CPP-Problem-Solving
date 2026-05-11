
#include <iostream>
using namespace std;

//float CircleIsoscelesTriangle(float IsoscelesArea, float triangleBottom, float PI)
//{
//	return floor((PI * pow(triangleBottom, 2) / 4) * ((2 * IsoscelesArea - triangleBottom) / (2 * IsoscelesArea + triangleBottom)));
//}
//
//int main()
//{
//	float IsoscelesArea;
//	float triangleBottom;
//	float PI = 3.14;
//
//	cout << "Please enter isosceles Area: " << endl;
//	cin >> IsoscelesArea;
//
//	cout << "Please enter bottom area: " << endl;
//	cin >> triangleBottom;
//
//	cout << "\nThe circle area is: " << CircleIsoscelesTriangle(IsoscelesArea,triangleBottom,PI) << endl;
//	return 0;
//}
//
//

//Another structured way 

void ReadIsoscelesTriangle(float& A, float& B)
{
	cout << "Please enter side A: " << endl;
	cin >> A;
	cout << "Please enter side B: " << endl;
	cin >> B;
}

float CalculateCircleByIsoscelesTriangle(float A, float B)
{
	const float PI = 3.141592653589793;
	float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
	return Area;
}

void PrintResults(float Area)
{
	cout << "The circle area is: " << Area << endl;
}

int main()
{
	float A, B;
	ReadIsoscelesTriangle(A, B);
	PrintResults(CalculateCircleByIsoscelesTriangle(A, B));
	return 0;
}