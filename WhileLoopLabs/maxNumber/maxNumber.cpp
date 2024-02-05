#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
	string text;
	int maxNumber = INT_MIN;

	cin >> text;

	while (text != "Stop") {
		int number = stoi(text);

		if (number >= maxNumber) {
			maxNumber = number;
		}
		cin >> text;
	}
	cout << maxNumber;
}