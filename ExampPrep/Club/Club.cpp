#include <iostream>
#include <string>
using namespace std;

int main()
{
	double income = 0.0;
	string cocktailName;
	int cocktailNum = 0;
	cin >> income;
	cin.ignore();
	getline(cin, cocktailName);

	double total = 0.0;
	double discount = 0.0;

	while (cocktailName != "Party!") {

		cin >> cocktailNum;
		cin.ignore();
		int letters = cocktailName.length();
		int currentRes = letters * cocktailNum;
		if (currentRes % 2 == 0) {
			discount = 0.0;
		}
		else {
			discount = currentRes * 0.25;
		}
		total += currentRes - discount;
		if (total >= income) {
			break;
		}


		getline(cin, cocktailName);
	}
	cout.setf(ios::fixed);
	cout.precision(2);

	if (income > total) {
		cout << "We need " << income - total << " leva more." << endl;
	}
	else {
		cout << "Target acquired." << endl;
	}
	cout << "Club income - " << total << " leva.";

}