#include <iostream>
#include <string>

using namespace std;

string ReadName()
{
	string Text;

	cout << "Please enter your name: " << endl;
	getline(cin, Text);

	return Text;
}

string EncryptText(string Text, short EncryptionKey)
{

	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);

	}
	return Text;

}

string DecryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);

	}
	return Text;
}

int main()
{
	const short EncryptionKey = 2; //this is simple encryption key for practice 

	string Text = ReadName();
	string TextAfterEncrypt = EncryptText(Text, EncryptionKey);
	string TextAfterDecrypt = DecryptText(TextAfterEncrypt, EncryptionKey);


	cout << "\nText before encryption: " << Text << endl;
	cout << "Text after encryption: " << TextAfterEncrypt << endl;
	cout << "Text after decryption: " << TextAfterDecrypt << endl;

	return 0;

}