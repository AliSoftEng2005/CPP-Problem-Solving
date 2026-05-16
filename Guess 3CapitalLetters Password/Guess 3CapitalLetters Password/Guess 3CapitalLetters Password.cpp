#include <iostream>
#include <string>

using namespace std;


string ReadPassword()
{
	string Password;

	cout << "Please enter the password from AAA to ZZZ: " << endl;
	cin >> Password;

	return Password;
}

bool GuessPassword(string OriginalPassword)
{
	int Trial = 0;

	string word = "";

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Trial++;

				word = word + char(i);            
				word = word + char(j);
				word = word + char(k);

				cout << "Trial [" << Trial << "]: " << word << "\n";

				if (word == OriginalPassword)
				{
					cout <<  "\nThe Password is " << word << "\nfound after " << Trial << " Trial." << endl;
					return true;
				}

				word = "";
			}

		}
	}

	return false;
	
}

int main()
{
	GuessPassword(ReadPassword());

	return 0;
}
