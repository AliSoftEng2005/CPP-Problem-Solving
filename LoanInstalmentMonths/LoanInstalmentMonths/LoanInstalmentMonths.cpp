
#include <iostream>
using namespace std;

//int main()
//{
//    float loanAmount;
//    float monthlyPayment;
//
//    cout << "Please enter the loan amount: " << endl;
//    cin >> loanAmount;
//    cout << "Please enter monthly payment: " << endl;
//    cin >> monthlyPayment;
//
//    float TotalMonths = loanAmount / monthlyPayment;
//    cout << "Total months are: " << TotalMonths << endl;
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

float TotalMonths(float LoanAmount, float monthlyPayment)
{
  
    return (float)LoanAmount / monthlyPayment;
   
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter the loan amount: ");
    float monthlyPayment = ReadPositiveNumber("Please enter monthly payment: ");

    cout << endl;
    cout << "Total Months are: " << TotalMonths(LoanAmount, monthlyPayment);

    return 0;

}

