

#include <iostream>
using namespace std;

void AllLetters()
{

	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}
}

void AllLettersUsingWhile()
{
	int j = 65;
	while (j <= 90)
	{
		cout << char(j) << endl;
		j++;
	}
}
int main()
{
	AllLetters();
	cout << endl;
	AllLettersUsingWhile();

	return 0;
}


