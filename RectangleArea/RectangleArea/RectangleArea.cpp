

#include <iostream>
using namespace std;

void ReadWidthAndHeight(float& Width, float& Height)
{
	cout << "Please enter the width of the rectangle: " << endl;
	cin >> Width;

	cout << "Please enter the height of the rectangle " << endl;
	cin >> Height;
}

float CalculateRectangleArea(float Width, float Height)
{
	return Width * Height;
}

void PrintResults(float Area)
{

	cout << "\nThe Area of the rectangle is: " <<Area << endl;
}
int main()
{
	
	float Width, Height;
	ReadWidthAndHeight(Width, Height);
	PrintResults(CalculateRectangleArea(Width, Height));
	

	return 0;

}

