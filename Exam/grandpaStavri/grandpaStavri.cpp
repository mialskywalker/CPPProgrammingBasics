#include <iostream>
using namespace std;

int main()
{
	int days = 0;
	cin >> days;

	double rakia = 0.0;
	double degrees = 0.0;
	double totalLiters = 0.0;
	double avgDegrees = 0.0;

	for (int i = 0; i < days; i++)
	{
		cin >> rakia >> degrees;
		totalLiters += rakia;
		avgDegrees += degrees * rakia;
	}

	avgDegrees = avgDegrees / totalLiters;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Liter: " << totalLiters << endl;
	cout << "Degrees: " << avgDegrees << endl;

	if (avgDegrees < 38) {
		cout << "Not good, you should baking!";
	}
	else if (avgDegrees >= 38 && avgDegrees <= 42) {
		cout << "Super!";
	}
	else if (avgDegrees > 42) {
		cout << "Dilution with distilled water!";
	}
}