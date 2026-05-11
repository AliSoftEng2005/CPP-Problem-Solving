

#include <iostream>
#include <string>

using namespace std;
int main()
{
	//string st1 = "43.22";

	//double num_double = stod(st1);
	//float num_float = stof(st1);
	//int num_int = stoi(st1);

	//cout << "double number: " << num_double << endl;
	//cout << "float number: " << num_float << endl;
	//cout << "int number: " << num_int << endl;

	int N1 = 20;
	double N2 = 33.5;
	int N4;
	float N3 = 55.23;

	N4 = N3;      //Implicit conversion from float to int
	//N4 = (int)N3; //Explicit Conversion
	//N4 = int(N3); //Explicit Conversion

	string str1, str2, str3;


	str1= to_string(N1);
	str2 = to_string(N2);
	str2 = to_string(N3);

	cout << "INTEGER IS: " << N4 << endl;

	cout << "string1 is: " << str1 << endl;
	cout << "string2 is: " << str2 << endl;
	cout << "String3 is: " << str3 << endl;

	



	return 0;
}

