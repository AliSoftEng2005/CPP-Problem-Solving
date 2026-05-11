

#include <iostream>
using namespace std;

void Powering()
{
    int userNum;
    int power;
    long long result = 1;
    cout << "enter a number:" << endl;
    cin >> userNum;
    cout << "enter its power:" << endl;
    cin >> power;
    for (int Num = 1; Num <= power; Num++)
    {
        result *= userNum;
    }
    cout << "Power of " << userNum << " is " << result << endl;
}

void PoweringWhile()
{
    int UserNumber;
    int PowerNum;
   
    cout << "Please enter a number: " << endl;
    cin >> UserNumber;
    cout << "Please enter its power: " << endl;
    cin >> PowerNum;
    int i = 1;
    int Result = 1;
    while (i <= PowerNum)
    {
        Result *= UserNumber;
        i++;
    }
    cout << "Power of " << UserNumber << " is " << Result << endl;

}

int main()
{
    Powering();
    PoweringWhile();

    return 0;
}


