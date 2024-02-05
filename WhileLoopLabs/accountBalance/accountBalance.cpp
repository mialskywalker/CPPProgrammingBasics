#include <iostream>
#include <string>
using namespace std;

int main()
{
	double totalMoney = 0.0;
	double money;
	string text;

	cin >> text;
	cout.setf(ios::fixed);
	cout.precision(2);
	while (text != "NoMoreMoney") {
		money = stod(text);
		
		if (money < 0) {
			cout << "Invalid operation!" << endl;
			break;
		}

		totalMoney += money;
		cout << "Increase: " << money << endl;

		cin >> text;
	}

	cout << "Total: " << totalMoney;
}