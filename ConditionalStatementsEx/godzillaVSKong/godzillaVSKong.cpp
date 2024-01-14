#include <iostream>
using namespace std;

int main()
{
	double budget = 0.0;
	int statists = 0;
	double clothesPerOne = 0.0;

	cin >> budget >> statists >> clothesPerOne;

	double decorPrice = budget * 0.1;
	double statistsPrice = statists * clothesPerOne;

	if (statists > 150) {
		statistsPrice -= statistsPrice * 0.1;
	}

	double total = decorPrice + statistsPrice;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= total) {
		cout << "Action!" << endl << "Wingard starts filming with " << budget - total << " leva left.";
	}
	else {
		cout << "Not enough money!" << endl << "Wingard needs " << total - budget << " leva more.";
	}
}