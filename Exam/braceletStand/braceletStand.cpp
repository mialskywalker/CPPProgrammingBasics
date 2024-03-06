#include <iostream>
using namespace std;

int main()
{
	double pocketMoney = 0.0;
	double dailyIncome = 0.0;
	double moneyGiven = 0.0;
	double presentPrice = 0.0;

	cin >> pocketMoney >> dailyIncome >> moneyGiven >> presentPrice;

	double pocketSaved = pocketMoney * 5;
	double incomeSaved = dailyIncome * 5;
	double totalSaved = pocketSaved + incomeSaved;
	double total = totalSaved - moneyGiven;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (total >= presentPrice) {
		cout << "Profit: " << total << " BGN, the gift has been purchased.";
	}
	else {
		cout << "Insufficient money: " << presentPrice - total << " BGN.";
	}
}