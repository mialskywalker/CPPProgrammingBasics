#include <iostream>
using namespace std;

int main()
{
	int budget = 0;
	string season;
	int fishermen = 0;

	double shipPrice = 0.0;
	double discount = 0.0;

	cin >> budget >> season >> fishermen;

	if (season == "Spring") {
		shipPrice = 3000;
		if (fishermen <= 6) {
			discount = shipPrice * 0.1;
			shipPrice -= discount;
		}
		else if (fishermen >= 7 && fishermen <= 11) {
			discount = shipPrice * 0.15;
			shipPrice -= discount;
		}
		else if (fishermen >= 12) {
			discount = shipPrice * 0.25;
			shipPrice -= discount;
		}
		if (fishermen % 2 == 0) {
			discount = shipPrice * 0.05;
			shipPrice -= discount;
		}
	}
	else if (season == "Summer") {
		shipPrice = 4200;
		if (fishermen <= 6) {
			discount = shipPrice * 0.1;
			shipPrice -= discount;
		}
		else if (fishermen >= 7 && fishermen <= 11) {
			discount = shipPrice * 0.15;
			shipPrice -= discount;
		}
		else if (fishermen >= 12) {
			discount = shipPrice * 0.25;
			shipPrice -= discount;
		}
		if (fishermen % 2 == 0) {
			discount = shipPrice * 0.05;
			shipPrice -= discount;
		}
	}
	else if (season == "Autumn") {
		shipPrice = 4200;
		if (fishermen <= 6) {
			discount = shipPrice * 0.1;
			shipPrice -= discount;
		}
		else if (fishermen >= 7 && fishermen <= 11) {
			discount = shipPrice * 0.15;
			shipPrice -= discount;
		}
		else if (fishermen >= 12) {
			discount = shipPrice * 0.25;
			shipPrice -= discount;
		}
	}
	else if (season == "Winter") {
		shipPrice = 2600;
		if (fishermen <= 6) {
			discount = shipPrice * 0.1;
			shipPrice -= discount;
		}
		else if (fishermen >= 7 && fishermen <= 11) {
			discount = shipPrice * 0.15;
			shipPrice -= discount;
		}
		else if (fishermen >= 12) {
			discount = shipPrice * 0.25;
			shipPrice -= discount;
		}
		if (fishermen % 2 == 0) {
			discount = shipPrice * 0.05;
			shipPrice -= discount;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= shipPrice) {
		cout << "Yes! You have " << budget - shipPrice << " leva left.";
	}
	else {
		cout << "Not enough money! You need " << shipPrice - budget << " leva.";
	}
}