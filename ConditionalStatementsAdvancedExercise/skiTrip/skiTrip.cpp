#include <iostream>
#include <string>
using namespace std;

int main()
{
	int stay = 0;
	string accomodation;
	string review;

	cin >> stay;
	cin.ignore();
	getline(cin, accomodation);
	cin >> review;


	double totalPrice = 0.0;
	double discount = 0.0;

	if (stay < 10) {
		if (accomodation == "room for one person") {
			totalPrice = 18 * (stay - 1);
		}
		else if (accomodation == "apartment") {
			totalPrice = 25 * (stay - 1);
			discount = totalPrice * 0.3;
			totalPrice -= discount;
		}
		else if (accomodation == "president apartment") {
			totalPrice = 35 * (stay - 1);
			discount = totalPrice * 0.1;
			totalPrice -= discount;
		}
	}
	else if (10 <= stay && stay <= 15) {
		if (accomodation == "room for one person") {
			totalPrice = 18 * (stay - 1);
		}
		else if (accomodation == "apartment") {
			totalPrice = 25 * (stay - 1);
			discount = totalPrice * 0.35;
			totalPrice -= discount;
		}
		else if (accomodation == "president apartment") {
			totalPrice = 35 * (stay - 1);
			discount = totalPrice * 0.15;
			totalPrice -= discount;
		}
	}
	else if (stay > 15) {
		if (accomodation == "room for one person") {
			totalPrice = 18 * (stay - 1);
		}
		else if (accomodation == "apartment") {
			totalPrice = 25 * (stay - 1);
			discount = totalPrice * 0.5;
			totalPrice -= discount;
		}
		else if (accomodation == "president apartment") {
			totalPrice = 35 * (stay - 1);
			discount = totalPrice * 0.2;
			totalPrice -= discount;
		}
	}

	if (review == "positive") {
		discount = totalPrice * 0.25;
		totalPrice += discount;
	}
	else if (review == "negative") {
		discount = totalPrice * 0.1;
		totalPrice -= discount;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << totalPrice;
}