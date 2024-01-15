#include <iostream>
using namespace std;

int main()
{
	int poolVolume, p1PerHour, p2PerHour;
	double h = 0.0;

	cin >> poolVolume >> p1PerHour >> p2PerHour >> h;

	double p1 = h * p1PerHour;
	double p2 = h * p2PerHour;
	double total = p1 + p2;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (poolVolume >= total) {
		double percentageTotal = total / poolVolume * 100;
		double p1Per = p1 / total * 100;
		double p2Per = p2 / total * 100;
		cout << "The pool is " << percentageTotal << "% full. Pipe 1: " << p1Per << "%. Pipe 2: " << p2Per << "%.";
	}
	else {
		double overflow = total - poolVolume;
		cout << "For " << h << " hours the pool overflows with " << overflow << " liters.";
	}

}