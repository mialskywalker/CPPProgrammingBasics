#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, z, workers;
	double y = 0.0;
	cin >> x >> y >> z >> workers;

	double totalGrapes = x * y;
	double grapesForWine = totalGrapes * 0.4;
	double wineLiters = grapesForWine / 2.5;

	if (wineLiters >= z) {
		double left = wineLiters - z;
		double perPerson = left / workers;
		cout << "Good harvest this year! Total wine: " << floor(wineLiters) << " liters." << endl << ceil(left) << " liters left -> " << ceil(perPerson) << " liters per person.";
	}
	else {
		double needed = z - wineLiters;
		cout << "It will be a tough winter! More " << floor(needed) << " liters wine needed.";
	}
}