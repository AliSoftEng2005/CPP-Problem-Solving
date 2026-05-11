

#include <iostream>
#include <cmath>

using namespace std;

//float CircleArbitraryTriangle(float side1, float side2, float side3, float PI)
//{
//	float P = (side1 + side2 + side3) / 2;
//	return  PI * round(pow((side1 * side2 * side3) / (4 * sqrt(P * (P - side1) * (P - side2) * (P - side3))), 2));
//}
//
//int main()
//{
//	float side1, side2, side3;
//	float PI = 3.14;
//	
//
//	cout << "Please enter side 1 for the triangle: " << endl;
//	cin >> side1;
//
//	cout << "Please enter side 2 for the triangle: " << endl;
//	cin >> side2;
//
//	cout << "Please enter side 3 for the triangle: " << endl;
//	cin >> side3;
//	
//
//	cout << "The circle Area is: " << CircleArbitraryTriangle(side1,side2,side3,PI) << endl;
//	return 0;
//}

//Another structured way 

void ReadArbitraryTriangleSides(float& A, float& B, float& C)
{
	cout << "Please enter the first side: " << endl;
	cin >> A;
	cout << "Please enter the second side: " << endl;
	cin >> B;
	cout << "Please enter the third side: " << endl;
	cin >> C;
}

float CalculateCircleThroughArbTriangle(float A, float B, float C)
{
	const float PI = 3.141592653589793;
	float P = (A + B + C) / 2;
	float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

	float Area = PI * pow(T, 2);
	return Area;
}

void PrintResults(float Area)
{
	cout << "\nThe circle area is: " << Area << endl;
}

int main()
{
	float A, B, C;
	ReadArbitraryTriangleSides(A, B, C);
	PrintResults(CalculateCircleThroughArbTriangle(A, B ,C));

	return 0;
}