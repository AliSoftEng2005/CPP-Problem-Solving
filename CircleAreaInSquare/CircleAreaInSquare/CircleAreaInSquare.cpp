

#include <iostream>
#include <cmath>
using namespace std;

////this program contains calculating the circle inside a square 
//
//float CircleSquare(float SideLength, float PI)
//{
//	//PI* (SideLength / 2 * (SideLength / 2));
//	return ceil((PI * pow(SideLength, 2)) / 4);
//}
//int main()
//{
//	float SideLength; //we just need one square side length from the user 
//	float PI = 3.14;
//
//	cout << "Please enter side length of the square: " << endl;
//	cin >> SideLength;
//
//	cout << "\nThe Area of the square is: " <<CircleSquare(SideLength,PI) << endl;
//
//	return 0;
//}

//Another structured way

float ReadSquareSide()
{
	float SquareSideLength;
	cout << "Please enter the square side length: " << endl;
	cin >> SquareSideLength;
	return SquareSideLength;
}

float CalculateCircleThroughSquare(float SquareSideLength)
{
	const float PI = 3.141592653589793;
	float Area = PI * pow((SquareSideLength / 2), 2);
	return Area;
}

void PrintResults(float Area)
{
	cout << "The circle area is: " <<Area << endl;
}

int main()
{
	PrintResults(CalculateCircleThroughSquare(ReadSquareSide()));
	return 0;
}