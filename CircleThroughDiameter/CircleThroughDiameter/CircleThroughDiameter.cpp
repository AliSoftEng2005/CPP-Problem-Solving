

#include <iostream>
#include <cmath>

using namespace std;
//
//float CircleDiameter(float Diameter,float PI)
//{
//	return ceil((PI * pow(Diameter, 2) / (4)));
//}
//
//int main()
//{
//	float Diameter;
//	float PI = 3.14;
//
//	cout << "Please enter the diameter of the circle: " << endl;
//	cin >> Diameter;
//
//
//	cout << "\nThe diameter area is: " << CircleDiameter(Diameter, PI) << endl;
//
//	return 0;
//}


//Another structured way 

float ReadDiameter() 
{
	float Diameter;
	cout << "Please enter the diameter value: " << endl;
	cin >> Diameter;
	return Diameter;
}

float CalculateTheCircleThroughDiameter(float Diameter)
{
	const float PI = 3.141592653589793;
	float Area = (PI * pow(Diameter, 2)) / 4;
	return Area;
}

void PrintResults(float Area) 
{
	cout << "\nThe circle area is: " << Area << endl;
}

int main()
{
	PrintResults(CalculateTheCircleThroughDiameter(ReadDiameter()));
	return 0;
}