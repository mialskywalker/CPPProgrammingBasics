#include <iostream>
using namespace std;

int main()
{
	int examHour = 0;
	int examMinutes = 0;
	int arrivalHour = 0;
	int arrivalMinutes = 0;

	cin >> examHour >> examMinutes >> arrivalHour >> arrivalMinutes;

	int exam = examHour * 60 + examMinutes;
	int arrival = arrivalHour * 60 + arrivalMinutes;

	if (exam >= arrival && exam - 30 <= arrival) {
		cout << "On time";
		if (exam - 30 <= arrival) {
			cout << endl << exam - arrival << " minutes before the start";
		}
	}
	else if (exam > arrival && exam - 30 > arrival) {
		cout << "Early";
		if (exam - arrival >= 60) {
			int res = exam - arrival;
			int hours = res / 60;
			int minutes = res % 60;
			cout << endl << hours << ":";
			if (minutes < 10) {
				cout << "0";
			}
			cout << minutes << " hours before the start";
		}
		else {
			cout << endl << exam - arrival << " minutes before the start";
		}
	}
	else {
		cout << "Late";
		if (arrival - exam >= 60) {
			int res = arrival - exam;
			int hours = res / 60;
			int minutes = res % 60;
			cout << endl << hours << ":";
			if (minutes < 10) {
				cout << "0";
			}
			cout << minutes << " hours after the start";
		}
		else {
			cout << endl << arrival - exam << " minutes after the start";
		}
	}
}