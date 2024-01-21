#include <iostream>
using namespace std;

int main()
{
	string fruit, day;
	double quantity = 0.0;
	double price = 0.0;
	double banana, apple, orange, grapefruit, kiwi, pineapple, grapes;

	cin >> fruit >> day >> quantity;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
		banana = 2.5;
		apple = 1.2;
		orange = 0.85;
		grapefruit = 1.45;
		kiwi = 2.7;
		pineapple = 5.5;
		grapes = 3.85;
		if (fruit == "banana") {
			price = banana * quantity;
			cout << price;
		}
		else if (fruit == "apple") {
			price = apple * quantity;
			cout << price;
		}
		else if (fruit == "orange") {
			price = orange * quantity;
			cout << price;
		}
		else if (fruit == "grapefruit") {
			price = grapefruit * quantity;
			cout << price;
		}
		else if (fruit == "kiwi") {
			price = kiwi * quantity;
			cout << price;
		}
		else if (fruit == "pineapple") {
			price = pineapple * quantity;
			cout << price;
		}
		else if (fruit == "grapes") {
			price = grapes * quantity;
			cout << price;
		}
		else {
			cout << "error";
		}
	}
	else if (day == "Saturday" || day == "Sunday") {
		banana = 2.7;
		apple = 1.25;
		orange = 0.9;
		grapefruit = 1.6;
		kiwi = 3.0;
		pineapple = 5.6;
		grapes = 4.2;
		if (fruit == "banana") {
			price = banana * quantity;
			cout << price;
		}
		else if (fruit == "apple") {
			price = apple * quantity;
			cout << price;
		}
		else if (fruit == "orange") {
			price = orange * quantity;
			cout << price;
		}
		else if (fruit == "grapefruit") {
			price = grapefruit * quantity;
			cout << price;
		}
		else if (fruit == "kiwi") {
			price = kiwi * quantity;
			cout << price;
		}
		else if (fruit == "pineapple") {
			price = pineapple * quantity;
			cout << price;
		}
		else if (fruit == "grapes") {
			price = grapes * quantity;
			cout << price;
		}
		else {
			cout << "error";
		}
	}
	else {
		cout << "error";
	}

}