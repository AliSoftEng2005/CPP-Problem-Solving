
#include <iostream>
using namespace std;

int main()
{
	int arr[10] = { 10,20,44,55,33,22,99,88,99,100 };
	int searchfor = 20;

	for (int i = 0; i <= 10; i++)
	{
		cout << "We are in iteration " << i + 1 << endl;
		if (searchfor==arr[i])
		{
			cout <<searchfor<<" found at position: " << i << endl;
			break;

		}
			
	}
	return 0;
}

