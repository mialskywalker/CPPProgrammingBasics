#include <iostream>
using namespace std;

int main()
{
	int age = 0;
	double washingMachine = 0.0;
	int toyPrice = 0;

	cin >> age >> washingMachine >> toyPrice;

	double moneyToGet = 10.0;
	int toysCount = 0;
	double totalMoneyGotten = 0.0;


	for (int i = 1; i <= age; i++)
	{
		if (i % 2 == 0) {
			totalMoneyGotten += moneyToGet - 1;
			moneyToGet += 10;
		}
		else {
			toysCount += 1;
		}
	}

	double toys = toysCount * toyPrice;
	totalMoneyGotten += toys;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (totalMoneyGotten >= washingMachine) {
		cout << "Yes! " << totalMoneyGotten - washingMachine;
	}
	else {
		cout << "No! " << washingMachine - totalMoneyGotten;
	}
}