#include <iostream>
using namespace std;

int main()
{
	string city, package, vip;
	int staying = 0;

	cin >> city >> package >> vip >> staying;
	double priceForDay = 0.0;
	double vipDiscount = 0.0;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (city == "Bansko" || city == "Borovets") {

		if (package == "withEquipment") {
			priceForDay = 100;
			if (vip == "yes") {
				vipDiscount = 0.1;
			}
			if (staying >= 7) {
				staying -= 1;
				double total = priceForDay - (priceForDay * vipDiscount);
				total = total * staying;
				cout << "The price is " << total << "lv! Have a nice time!";
			}
			else if (staying <= 0) {
				cout << "Days must be positive number!";
			}
			else {
				double total = priceForDay - (priceForDay * vipDiscount);
				total = total * staying;
				cout << "The price is " << total << "lv! Have a nice time!";
			}
		}
		else if (package == "noEquipment") {
			priceForDay = 80;
			if (vip == "yes") {
				vipDiscount = 0.05;
			}
			if (staying >= 7) {
				staying -= 1;
				double total = priceForDay - (priceForDay * vipDiscount);
				total = total * staying;
				cout << "The price is " << total << "lv! Have a nice time!";
			}
			else if (staying <= 0) {
				cout << "Days must be positive number!";
			}
			else {
				double total = priceForDay - (priceForDay * vipDiscount);
				total = total * staying;
				cout << "The price is " << total << "lv! Have a nice time!";
			}
		}
		else {
			cout << "Invalid input!";
		}

	}
	else if (city == "Varna" || city == "Burgas") {
		if (package == "withBreakfast") {
			priceForDay = 130;
			if (vip == "yes") {
				vipDiscount = 0.12;
			}
			if (staying >= 7) {
				staying -= 1;
				double total = priceForDay - (priceForDay * vipDiscount);
				total = total * staying;
				cout << "The price is " << total << "lv! Have a nice time!";
			}
			else if (staying <= 0) {
				cout << "Days must be positive number!";
			}
			else {
				double total = priceForDay - (priceForDay * vipDiscount);
				total = total * staying;
				cout << "The price is " << total << "lv! Have a nice time!";
			}
		}
		else if (package == "noBreakfast") {
			priceForDay = 100;
			if (vip == "yes") {
				vipDiscount = 0.07;
			}
			if (staying >= 7) {
				staying -= 1;
				double total = priceForDay - (priceForDay * vipDiscount);
				total = total * staying;
				cout << "The price is " << total << "lv! Have a nice time!";
			}
			else if (staying <= 0) {
				cout << "Days must be positive number!";
			}
			else {
				double total = priceForDay - (priceForDay * vipDiscount);
				total = total * staying;
				cout << "The price is " << total << "lv! Have a nice time!";
			}
		}
		else {
			cout << "Invalid input!";
		}
	}
	else {
		cout << "Invalid input!";
	}

}