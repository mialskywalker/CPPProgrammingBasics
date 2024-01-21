#include <iostream>
using namespace std;

int main()
{
	string city;
	double sales = 0.0;
	double total = 0.0;
	double percentage = 0.0;

	cin >> city >> sales;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (city == "Sofia") {
		if (sales >= 0 && sales <= 500) {
			percentage = 0.05;
			total = sales * percentage;
			cout << total;
		}
		else if (sales > 500 && sales <= 1000) {
			percentage = 0.07;
			total = sales * percentage;
			cout << total;
		}
		else if (sales > 1000 && sales <= 10000) {
			percentage = 0.08;
			total = sales * percentage;
			cout << total;
		}
		else if (sales > 10000) {
			percentage = 0.12;
			total = sales * percentage;
			cout << total;
		}
		else {
			cout << "error";
		}
	}
	else if (city == "Varna") {
		if (sales >= 0 && sales <= 500) {
			percentage = 0.045;
			total = sales * percentage;
			cout << total;
		}
		else if (sales > 500 && sales <= 1000) {
			percentage = 0.075;
			total = sales * percentage;
			cout << total;
		}
		else if (sales > 1000 && sales <= 10000) {
			percentage = 0.1;
			total = sales * percentage;
			cout << total;
		}
		else if (sales > 10000) {
			percentage = 0.13;
			total = sales * percentage;
			cout << total;
		}
		else {
			cout << "error";
		}
	}
	else if (city == "Plovdiv") {
		if (sales >= 0 && sales <= 500) {
			percentage = 0.055;
			total = sales * percentage;
			cout << total;
		}
		else if (sales > 500 && sales <= 1000) {
			percentage = 0.08;
			total = sales * percentage;
			cout << total;
		}
		else if (sales > 1000 && sales <= 10000) {
			percentage = 0.12;
			total = sales * percentage;
			cout << total;
		}
		else if (sales > 10000) {
			percentage = 0.145;
			total = sales * percentage;
			cout << total;
		}
		else {
			cout << "error";
		}
	}
	else {
		cout << "error";
	}


}