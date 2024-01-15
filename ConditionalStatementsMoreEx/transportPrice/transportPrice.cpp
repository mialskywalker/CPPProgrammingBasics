#include <iostream>
using namespace std;

int main()
{
	const double TAXI_START = 0.7;
	const double TAXI_DAY = 0.79;
	const double TAXI_NIGHT = 0.90;
	const double BUS = 0.09;
	const double TRAIN = 0.06;

	int distance;
	string dayType;
	cin >> distance >> dayType;

	double taxi = 0.0;
	double bus = 0.0;
	double train = 0.0;
	double result = 0.0;

	bus = BUS * distance;
	train = TRAIN * distance;

	if (dayType == "day") {
		taxi = TAXI_START + (TAXI_DAY * distance);
	}
	else if (dayType == "night") {
		taxi = TAXI_START + (TAXI_NIGHT * distance);
	}

	if (distance >= 100) {
		
		if (bus <= taxi && bus <= train) {
			result = bus;
		}
		else if (train <= taxi && train <= bus) {
			result = train;
		}
		else if (taxi <= train && taxi <= bus) {
			result = taxi;
		}
	}
	else if (distance >= 20) {

		if (bus <= taxi) {
			result = bus;
		}
		else if (taxi <= bus) {
			result = taxi;
		}
	}
	else {
		result = taxi;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << result;

}