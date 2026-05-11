

#include <iostream>
using namespace std;


int y = 600;

void MyFunction()
{
	int y = 400;

	cout << "the local value of the procedure is: " << y << endl;


}

int main()
{
	int y = 200;

	cout << ::y << endl;
	MyFunction();
	cout << "the result of the main is: " << y << endl;
}
