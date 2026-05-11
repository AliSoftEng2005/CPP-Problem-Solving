

#include <iostream>
using namespace std;

int main()
{
    int UserNum;
    int sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Please enter a number: ";
        cin >> UserNum;
        if (UserNum > 50)
        {
            cout << "The number us greater than 50 and won't be caculated" << endl;
            continue;
        }
        sum += UserNum;
    }
    cout << "The sum of your number exclude numbers above 50 is: " << sum << endl;
    return 0;
}
