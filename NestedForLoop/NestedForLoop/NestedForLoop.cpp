
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 12; i++)
    {
        cout << "i = " << i << endl;
        for (int j = 1; j <= 12; j++)
        {                                                                   //ÌÏæá ÇáÖÑÈ
            cout << i << " * " << j <<" = " << i * j << endl;
        }

        cout << "-------------------------" << endl;
    }


    for (int i = 65; i <= 90; i++)
    {
        cout << "Letter " << char(i) << endl;
        for (int j = 65; j <= 90; j++)                                     //Letters AA,AB,AC so on
        {
    
               cout << char(i) << char(j) << endl;
         
        }
        cout << "------------------------\n";
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4;j++)
        {
            cout << " (" << i << "," << j << ") ";
        }
        cout << "\n";
    }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for (int i = 1; i <= 4; i++)
    {
        
        for (int j = 4; j >= 1; j--)
        {
            if (j <= 4) {
                cout << " ";
            }
            if (j <= i) {
                cout << "*";
            }
            
        }
        
        cout << "\n";
    }

    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            
               cout << "*";
           
        }
        cout << "\n";

    }

    cout << "\n";
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
                cout << j;
            
        }
        cout << "\n";

    }

    cout << "\n";
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
                cout << j;
            

        }
        cout << "\n";

    }


    cout << "\n";
    for (int i = 65; i <= 70; i++)
    {
        for (int j = 65; j <= i; j++)
           
            
                cout << char(j);
            
        cout << "\n";
    }

    cout << "\n";
    for (int i = 1; i <= 10; i++)
    {
        for (int j = i; j <= 10; j++)
        {
            cout << j;

        }
        cout << "\n";

    }


    return 0;
}


