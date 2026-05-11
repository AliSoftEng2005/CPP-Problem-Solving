//
//
#include <iostream>
using namespace std;
//
//int main()
//{
//	int userNum;
//	cout << "Please enter a number: " << endl;
//	cin >> userNum;
//	cout << "\nFor loop:\n";
//
//	for (int Num = userNum ;Num >= 1; Num--)
//	{
//		cout << Num << endl;
//	}
//
//	cout << "\nWhile loop:\n";
//	int i = userNum;
//
//	while (i >= 1)
//	{
//		cout << i << endl;
//		i--;
//	}
//	return 0;
//}


//Another structured way

int ReadNumber()
{
    int N;
    cout << "please enter a number:" << endl;
    cin >> N;
    return N;
}

void PrintRangeFromNto1_UsingWhile(int N)
{

    int counter = N + 1;
    cout << "Range printed using while statement\n";

    while (counter > 1)
    {
        counter--;
        cout << counter << endl;
    }
}
void PrintRangeFromNto1_UsingDoWhile(int N)
{
    int counter = N + 1;

    cout << "Range printed using do while loop\n";

    do
    {
        counter--;
        cout << counter << endl;
    } while (counter > 1);
}
void PrintRangeFromNto1_UsingFor(int N)
{

    cout << "Range printed using for loop\n";

    for (int counter = N; counter >= 1; counter--)
    {
        cout << counter << endl;
    }
}
int main()
{
    int N = ReadNumber();

    PrintRangeFromNto1_UsingWhile(N);
    PrintRangeFromNto1_UsingDoWhile(N);
    PrintRangeFromNto1_UsingFor(N);

    return 0;
}

