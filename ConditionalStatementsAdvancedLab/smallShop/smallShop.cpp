#include <iostream>
using namespace std;

int main()
{
	double coffee, water, beer, sweets, peanuts;
	double result = 0.0;

	string product, city;
	double quantity = 0.0;
	
	cin >> product >> city >> quantity;

	if (city == "Sofia") {
		coffee = 0.5;
		water = 0.8;
		beer = 1.2;
		sweets = 1.45;
		peanuts = 1.6;
	}
	else if (city == "Plovdiv") {
		coffee = 0.4;
		water = 0.7;
		beer = 1.15;
		sweets = 1.30;
		peanuts = 1.5;
	}
	else if (city == "Varna") {
		coffee = 0.45;
		water = 0.70;
		beer = 1.1;
		sweets = 1.35;
		peanuts = 1.55;
	}

	if (product == "coffee") {
		result = coffee * quantity;
	}
	else if (product == "water") {
		result = water * quantity;
	}
	else if (product == "beer") {
		result = beer * quantity;
	}
	else if (product == "sweets") {
		result = sweets * quantity;
	}
	else if (product == "peanuts") {
		result = peanuts * quantity;
	}

	cout << result;
}