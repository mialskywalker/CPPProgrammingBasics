#include <iostream>
using namespace std;

int main()
{
	string day, result;
	cin >> day;

	if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
		result = "Working day";
	}
	else if (day == "Saturday" || day == "Sunday") {
		result = "Weekend";
	}
	else {
		result = "Error";
	}

	cout << result;
}