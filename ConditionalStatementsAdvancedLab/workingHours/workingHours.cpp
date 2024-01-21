#include <iostream>
using namespace std;

int main()
{
	int hour = 0;
	string day, result;

	cin >> hour >> day;

	if (hour >= 10 && hour <= 18) {
		if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday") {
			result = "open";
		}
		else if (day == "Sunday") {
			result = "closed";
		}
	}
	else {
		result = "closed";
	}

	cout << result;
}