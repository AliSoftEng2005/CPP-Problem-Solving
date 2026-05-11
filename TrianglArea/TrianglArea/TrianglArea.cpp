

#include <iostream>
using namespace std;

//int main()
//{
//    float height;
//    float bottom;
//
//    cout << "Please enter the height:" << endl;
//    cin >> height;
//
//    cout << "Please enter the bottom: " << endl;
//    cin >> bottom;
//    
//    float TriArea = (0.50 * bottom) * height;
//    cout << "\nThe area of the triangle is: " << TriArea << endl;
//}

//Another structured way 

void ReadTriangleArea(float& Height, float& Bottom)
{
	cout << "Please enter the height of the triangle:" << endl;
	cin >> Height;

	cout << "Please enter the bottom of the triangle:" << endl;
	cin >> Bottom;
}

float CalculateTheTriangleArea(float Height, float Bottom)
{
	float Area = (Bottom / 2) * Height;
	return Area;
}

void PrintResults(float Area)
{
	cout << "The triangle area is: " << Area << endl;
}

int main()
{
	float Height, Bottom;
	ReadTriangleArea(Height, Bottom);
	PrintResults(CalculateTheTriangleArea(Height, Bottom));
	return 0;
}
