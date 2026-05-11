

#include <iostream>
using namespace std;

int ReadNumber()
{
    int N;
    cout << "please enter a number:" << endl;
    cin >> N;
    return N;
}

void PrintRangeFrom1toN_UsingWhile(int N)
{
    int counter = 0;

    cout << "Range printed using while statement\n";

    while (counter < N)
    {
        counter++;
        cout << counter << endl;
    }
}
void PrintRangeFrom1toN_UsingDoWhile(int N)
{
    int counter = 0;

    cout << "Range printed using do while loop\n";

    do
    {
        counter++;
        cout << counter << endl;
    } while (counter < N);
}
void PrintRangeFrom1toN_UsingFor(int N)
{
    int counter;

    cout << "Range printed using for loop\n";

    for (counter = 1; counter <= N; counter++)
    {
        cout << counter << endl;
    }
}
int main()
{
    int N = ReadNumber();

    PrintRangeFrom1toN_UsingWhile(N);
    PrintRangeFrom1toN_UsingDoWhile(N);
    PrintRangeFrom1toN_UsingFor(N);

    return 0;
}


