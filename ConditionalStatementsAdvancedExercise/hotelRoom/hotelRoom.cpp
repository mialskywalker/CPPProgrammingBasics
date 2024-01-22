#include <iostream>
using namespace std;

int main()
{
	string month;
	int nights = 0;
	double apartment = 0.0;
	double studio = 0.0;
	double discount = 0.0;

	cin >> month >> nights;

	if (month == "May" || month == "October") {
		apartment = nights * 65;
		studio = nights * 50;
		if (nights > 7 && nights <= 14) {
			discount = studio * 0.05;
			studio -= discount;
		}
		else if (nights > 14) {
			discount = studio * 0.3;
			studio -= discount;
			discount = apartment * 0.1;
			apartment -= discount;
		}
	}
	else if (month == "June" || month == "September") {
		apartment = nights * 68.7;
		studio = nights * 75.2;
		if (nights > 14) {
			discount = studio * 0.2;
			studio -= discount;
			discount = apartment * 0.1;
			apartment -= discount;
		}
	}
	else if (month == "July" || month == "August") {
		apartment = nights * 77;
		studio = nights * 76;
		if (nights > 14) {
			discount = apartment * 0.1;
			apartment -= discount;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Apartment: " << apartment << " lv." << endl << "Studio: " << studio << " lv.";
}