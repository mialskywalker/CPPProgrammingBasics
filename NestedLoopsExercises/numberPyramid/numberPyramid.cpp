#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	int currentNumber = 1;
	bool isBigger = false;

	for (int rows = 1; rows <= number; rows++)
	{
		for (int cols = 1; cols <= rows; cols++)
		{
			if (currentNumber > number)
			{
				isBigger = true;
				break;
			}
			cout << currentNumber << " ";
			currentNumber++;
		}
		if (isBigger) {
			break;
		 }
		cout << endl;

	}
}