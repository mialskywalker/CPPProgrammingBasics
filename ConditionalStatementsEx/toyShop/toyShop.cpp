#include <iostream>
using namespace std;

int main()
{
	const double PUZZLE_PRICE = 2.6;
	const double DOLL_PRICE = 3.0;
	const double BEAR_PRICE = 4.1;
	const double MINION_PRICE = 8.2;
	const double TRUCK_PRICE = 2.0;

	double trip_price = 0.0;
	int puzzleCount, dollCount, bearCount, minionCount, truckCount;

	cin >> trip_price >> puzzleCount >> dollCount >> bearCount >> minionCount >> truckCount;

	double totalPrice = (puzzleCount * PUZZLE_PRICE) + (dollCount * DOLL_PRICE) + (bearCount * BEAR_PRICE) + (minionCount * MINION_PRICE) + (truckCount * TRUCK_PRICE);
	int toysCount = puzzleCount + dollCount + bearCount + minionCount + truckCount;

	if (toysCount >= 50) {
		totalPrice -= totalPrice * 0.25;
	}

	totalPrice -= totalPrice * 0.1;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (totalPrice >= trip_price) {
		cout << "Yes! " << totalPrice - trip_price << " lv left.";
	}
	else {
		cout << "Not enough money! " << trip_price - totalPrice << " lv needed.";
	}
}