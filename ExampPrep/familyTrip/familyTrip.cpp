#include <iostream>
using namespace std;

int main()
{
	const double FUEL_PER_LITER = 2.1;
	const int GUIDE_PRICE = 100;

	double budget = 0.0;
	double liters = 0.0;
	string day;

	cin >> budget >> liters >> day;

	double fuel = FUEL_PER_LITER * liters;
	double guide = GUIDE_PRICE + fuel;

	if (day == "Sunday") {
		guide -= guide * 0.2;
	}
	else if (day == "Saturday") {
		guide -= guide * 0.1;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= guide) {
		cout << "Safari time! Money left: " << budget - guide << " lv.";
	}
	else {
		cout << "Not enough money! Money needed: " << guide - budget << " lv.";
	}

}