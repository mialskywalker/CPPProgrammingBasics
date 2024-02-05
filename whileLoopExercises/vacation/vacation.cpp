#include <iostream>
using namespace std;

int main()
{
	double moneyNeeded;
	double totalMoney;
	string command;
	double money;
	int days = 0;
	int spent = 0;

	cin >> moneyNeeded >> totalMoney;

	while (totalMoney < moneyNeeded && spent < 5) {
		cin >> command >> money;

		days++;
		
		if (command == "spend") {
			totalMoney -= money;
			spent++;
			if (totalMoney <= 0) {
				totalMoney = 0;
			}
		}
		else if (command == "save") {
			spent = 0;
			totalMoney += money;
		}
		
	}

	if (spent == 5) {
		cout << "You can't save the money." << endl << days << endl;
	}
	else if (totalMoney >= moneyNeeded){
		cout << "You saved the money for " << days << " days." << endl;
	}
}