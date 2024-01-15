#include <iostream>
using namespace std;

int main()
{
	string fuelType;
	double fuelInTank = 0.0;

	cin >> fuelType >> fuelInTank;

	string result;

	if (fuelInTank >= 25) {

		if (fuelType == "Diesel") {
			result = "You have enough diesel.";
		}
		else if (fuelType == "Gasoline") {
			result = "You have enough gasoline.";
		}
		else if (fuelType == "Gas") {
			result = "You have enough gas.";
		}
		else {
			result = "Invalid fuel!";
		}

	}
	else {
		if (fuelType == "Diesel") {
			result = "Fill your tank with diesel!";
		}
		else if (fuelType == "Gasoline") {
			result = "Fill your tank with gasoline!";
		}
		else if (fuelType == "Gas") {
			result = "Fill your tank with gas!";
		}
		else {
			result = "Invalid fuel!";
		}
	}

	cout << result;
}