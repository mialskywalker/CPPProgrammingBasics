#include <iostream>
using namespace std;

int main()
{
	double budget = 0.0;
	string season, destination, location;
	double totalPrice = 0.0;

	cin >> budget >> season;

	if (budget <= 100) {
		destination = "Bulgaria";
		if (season == "summer") {
			totalPrice = budget * 0.3;
			location = "Camp";
		}
		else if (season == "winter") {
			totalPrice = budget * 0.7;
			location = "Hotel";
		}
	}
	else if (budget > 100 && budget <= 1000) {
		destination = "Balkans";
		if (season == "summer") {
			totalPrice = budget * 0.4;
			location = "Camp";
		}
		else if (season == "winter") {
			totalPrice = budget * 0.8;
			location = "Hotel";
		}
	}
	else if (budget > 1000) {
		destination = "Europe";
		location = "Hotel";
		totalPrice = budget * 0.9;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Somewhere in " << destination << endl << location << " - " << totalPrice;

}