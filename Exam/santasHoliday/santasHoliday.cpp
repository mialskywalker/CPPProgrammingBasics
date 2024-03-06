#include <iostream>
#include <string>
using namespace std;

int main()
{
	int days = 0;
	string typeOfStay, grade;

	cin >> days;
	cin.ignore();
	getline(cin, typeOfStay);
	cin >> grade;

	double staying = 0.0;
	double discount = 0.0;
	double total = 0.0;

	if (days < 10) {
		if (typeOfStay == "room for one person") {
			staying = 18.0;
		}
		else if (typeOfStay == "apartment") {
			staying = 25.0;
			discount = 0.3;
		}
		else if (typeOfStay == "president apartment") {
			staying = 35.0;
			discount = 0.1;
		}
		total = (days - 1) * staying;
		double takeDiscount = total * discount;
		total -= takeDiscount;
	}
	else if (days >= 10 && days <= 15) {
		if (typeOfStay == "room for one person") {
			staying = 18.0;
		}
		else if (typeOfStay == "apartment") {
			staying = 25.0;
			discount = 0.35;
		}
		else if (typeOfStay == "president apartment") {
			staying = 35.0;
			discount = 0.5;
		}
		total = (days - 1) * staying;
		double takeDiscount = total * discount;
		total -= takeDiscount;
	}
	else if (days > 15) {
		if (typeOfStay == "room for one person") {
			staying = 18.0;
		}
		else if (typeOfStay == "apartment") {
			staying = 25.0;
			discount = 0.5;
		}
		else if (typeOfStay == "president apartment") {
			staying = 35.0;
			discount = 0.2;
		}
		total = (days - 1) * staying;
		double takeDiscount = total * discount;
		total -= takeDiscount;
	}

	if (grade == "positive") {
		double toAdd = total * 0.25;
		total += toAdd;
	}
	else if (grade == "negative") {
		double toTake = total * 0.1;
		total -= toTake;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << total;
}