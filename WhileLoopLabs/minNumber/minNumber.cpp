#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
	string text;
	int minNumber = INT_MAX;

	cin >> text;

	while (text != "Stop") {
		int number = stoi(text);

		if (number <= minNumber) {
			minNumber = number;
		}
		cin >> text;
	}
	cout << minNumber;
}