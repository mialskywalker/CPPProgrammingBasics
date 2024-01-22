#include <iostream>
using namespace std;

int main()
{
	const double ROSE_PRICE = 5.0;
	const double DAHLIA_PRICE = 3.8;
	const double TULIP_PRICE = 2.8;
	const double NARCISSUS_PRICE = 3.0;
	const double GLADIOLUS_PRICE = 2.5;

	string flower;
	int quantity, budget;
	double total, discount;

	cin >> flower >> quantity >> budget;

	if (flower == "Roses") {
		total = ROSE_PRICE * quantity;
		if (quantity > 80) {
			discount = total * 0.1;
			total -= discount;
		}
	}
	else if (flower == "Dahlias") {
		total = DAHLIA_PRICE * quantity;
		if (quantity > 90) {
			discount = total * 0.15;
			total -= discount;
		}
	}
	else if (flower == "Tulips") {
		total = TULIP_PRICE * quantity;
		if (quantity > 80) {
			discount = total * 0.15;
			total -= discount;
		}
	}
	else if (flower == "Narcissus") {
		total = NARCISSUS_PRICE * quantity;
		if (quantity < 120) {
			discount = total * 0.15;
			total += discount;
		}
	}
	else if (flower == "Gladiolus") {
		total = GLADIOLUS_PRICE * quantity;
		if (quantity < 80) {
			discount = total * 0.2;
			total += discount;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= total) {
		cout << "Hey, you have a great garden with " << quantity << " " << flower << " and " << budget - total << " leva left.";
	}
	else {
		cout << "Not enough money, you need " << total - budget << " leva more.";
	}
}