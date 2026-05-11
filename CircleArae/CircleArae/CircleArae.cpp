

#include <iostream>
#include <cmath>

using namespace std;

//float CircleArea(float radius, float PI = 3.14)
//{
//	return ceil((PI * pow(radius, 2)));
//}
//
//int main()
//{
//	float radius;
//	float PI = 3.14;
//
//	cout << "Please enter the radius area: " << endl;
//	cin >> radius;
//
//	cout << "the area of the circle is: " <<CircleArea(radius,PI) << endl;
//
//	return 0;
//}

//Another structured way

float ReadRadius()
{
	float R;
	cout << "Please enter radius area: " << endl;
	cin >> R;

	return R;
}

float CalculateCircleArea(float R)
{
	const float PI = 13.141592653589793238;
	float Area = pow(R, 2) * PI;
	return Area;
}

void PrintResults(float Area)
{
	cout << "The circle area = " << Area << endl;
}

int main()
{
	PrintResults(CalculateCircleArea(ReadRadius()));
	return 0;
}
