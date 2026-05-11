
#include <iostream>
using namespace std;

//float CircleCircumference(float CircumferenceLength, float PI)
//{
//	return floor(pow(CircumferenceLength, 2) / (4 * PI));
//}
//
//int main()
//{
//	float CircumferenceLength; //ÿÊ· «·„ÕÌÿ Õﬁ «·œ«∆—… 
//	float PI = 3.14;
//
//	cout << "Please enter the circumference of the circle: " << endl;
//	cin >> CircumferenceLength;
//
//	
//	cout << "The circle area is: " << CircleCircumference(CircumferenceLength, PI) << endl;
//
//	return 0;
//}

//Another structured way 

float ReadCircumferenceLength()
{
	float Circumference;
	cout << "Please enter the circumference length: " << endl;
	cin >> Circumference;
	return Circumference;
}

float CalculateCircleArea(float Circumference)
{
	const float PI = 3.141592653589793;
	float Area = pow(Circumference, 2) / (4 * PI);
	return Area;
}

void PrintResults(float Area) 
{
	cout << "The circle area is:" <<Area << endl;
}

int main()
{
	PrintResults(CalculateCircleArea(ReadCircumferenceLength()));
	return 0;
}


