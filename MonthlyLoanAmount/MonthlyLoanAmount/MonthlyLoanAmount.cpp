

#include <iostream>
using namespace std;

//int main()
//{
//    float loanAmount;
//    float totalMonths;
//
//    cout << "Please enter loan installment amount: " << endl;
//    cin >> loanAmount;
//    cout << "Please enter how many months: " << endl;
//    cin >> totalMonths;
//
//    float MonthlyAmount = loanAmount / totalMonths;
//    cout << "Your monthly amount is: " << MonthlyAmount << endl;
//
//    return 0;
//}

float ReadPositiveNumber(string Message)
{
    float Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

float MonthlyInstallment(float LoanAmount, float TotalMonths)
{

    return (float)LoanAmount / TotalMonths;

}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter the loan amount: ");
    float TotalMonths = ReadPositiveNumber("Please enter how many months: ");

    cout << endl;
    cout << "Monthly Installment = " << MonthlyInstallment(LoanAmount, TotalMonths);

    return 0;

}


