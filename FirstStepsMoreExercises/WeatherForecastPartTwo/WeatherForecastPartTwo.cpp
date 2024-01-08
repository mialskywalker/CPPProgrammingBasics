#include <iostream>
using namespace std;

int main()
{
	double degrees = 0.0;
	string text;

	cin >> degrees;

	if (26.00 <= degrees && degrees <= 35.00)
	{
		text = "Hot";
	}
	else if (20.1 <= degrees && degrees <= 25.9) {
		text = "Warm";
	}
	else if (15.00 <= degrees && degrees <= 20.00) {
		text = "Mild";
	}
	else if (12.00 <= degrees && degrees <= 14.9) {
		text = "Cool";
	}
	else if (5.00 <= degrees && degrees <= 11.9) {
		text = "Cold";
	}
	else {
		text = "unknown";
	}
	cout << text;
}