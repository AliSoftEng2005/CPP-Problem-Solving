

#include <iostream>
using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadPersonInfo(strInfo &Info)
{
    cout << "\nPlease enter your first name: " << endl;
    cin >> Info.FirstName;
    cout << "Please enter your last name:" << endl;
    cin >> Info.LastName;
    cout << "Please enter your age:" << endl;
    cin >> Info.Age;
    cout << "Please enter your phone number:" << endl;
    cin >> Info.Phone;
}
void PrintPersonInfo(strInfo Info)
{
    cout << "**********************************\n";
    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;
    cout << "**********************************\n";

}
void ReadPersonsInfo(strInfo Users[100],int &NumberOfPersons)
{
    cout << "Please enter the number of the users that you want to insert their information:" << endl;
    cin >> NumberOfPersons;
    for (int i = 0; i <= NumberOfPersons - 1;i++)
    {
        cout << "\nInter the information of person " << i+1 <<" :" << endl;
        ReadPersonInfo(Users[i]);
    }
}
void PrintPersonsInfo(strInfo Users[100],int length)
{
    for (int i = 0; i <= length - 1;i++)
    {
        cout << "\nPerson " << i + 1 << " info " << endl;
        PrintPersonInfo(Users[i]);
    }
}

int main()
{
    strInfo Users[100];
    int NumberOfPersons = 0;

    ReadPersonsInfo(Users,NumberOfPersons);
    PrintPersonsInfo(Users,NumberOfPersons);

    return 0;
}

