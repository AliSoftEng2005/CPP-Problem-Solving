

#include <iostream>
#include <cmath>

using namespace std;

//float RectangleThroughDiagonal(float sideOfRec, float diagonal)
//{
//
//	return sideOfRec * sqrt(pow(diagonal, 2) - (pow(sideOfRec, 2)));
//}
//
//
//int main()
//{
//	float sideOfRec;
//	float diagonal;
//
//	cout << "Please enter the side area: " << endl;
//	cin >> sideOfRec;
//	cout << "Please enter the diagonal area: " << endl;
//	cin >> diagonal;
//
//	cout << "The rectangle area is: " << RectangleThroughDiagonal(sideOfRec,diagonal) << endl;
//
//	return 0;
//}

//Another structure way 


void ReadRectangleDiagonal(float& SideOfRec, float& diagonal)
{
	cout << "Please enter the side of area: " << endl;
	cin >> SideOfRec;
	cout << "Please enter the diagonal area: " << endl;
	cin >> diagonal;
}

float CalculateRectangleDiagonal(float SideOfRec, float diagonal)
{
	return SideOfRec * sqrt(pow(diagonal, 2) - (pow(SideOfRec, 2)));
}

void PrintResults(float Area)
{
	cout << "The Rectangle area through the diagonal and side of rectangle is: " << Area << endl;
}

int main()
{
	float SideOfRec, diagonal;
	ReadRectangleDiagonal(SideOfRec, diagonal);
	PrintResults(CalculateRectangleDiagonal(SideOfRec, diagonal));
	return 0;
}