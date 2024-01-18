#include <iostream>
using namespace std;

int main()
{
	const double GASOLINE = 2.22;
	const double DIESEL = 2.33;
	const double GAS = 0.93;

	const double GASOLINE_DISCOUNT = 0.18;
	const double DIESEL_DISCOUNT = 0.12;
	const double GAS_DISCOUNT = 0.08;

	string fuelType, hasCard;
	double liters = 0.0;

	cin >> fuelType >> liters >> hasCard;

	double result = 0.0;
	double discount = 0.0;

	if (fuelType == "Gasoline") {
		result = GASOLINE * liters;
		if (hasCard == "Yes") {
			discount = GASOLINE_DISCOUNT * liters;
		}
		result -= discount;
	}
	else if (fuelType == "Diesel") {
		result = DIESEL * liters;
		if (hasCard == "Yes") {
			discount = DIESEL_DISCOUNT * liters;
		}
		result -= discount;
	}
	else if (fuelType == "Gas") {
		result = GAS * liters;
		if (hasCard == "Yes") {
			discount = GAS_DISCOUNT * liters;
		}
		result -= discount;
	}

	if (liters >= 20 && liters <= 25) {
		discount = result * 0.08;
		result -= discount;
	}
	else if (liters > 25) {
		discount = result * 0.1;
		result -= discount;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << result << " lv.";
	
}