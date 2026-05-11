

#include <iostream>
using namespace std;


int ReadNumbers(int& Num1, int& Num2)
{
    cout << "Please enter the first number: " << endl;
    cin >> Num1;

    cout << "Please enter the second number: " << endl;
    cin >> Num2;

    return Num1, Num2;
}

int MaxOfNumbers(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

void PrintResults(int Max)
{
    cout << "The Max Number is: " << Max << endl;
}
int main()
{
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintResults(MaxOfNumbers(Num1, Num2));

    return 0;

}

