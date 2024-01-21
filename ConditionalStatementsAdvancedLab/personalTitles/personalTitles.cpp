#include <iostream>
using namespace std;

int main()
{
	double age = 0.0;
	char gender;
	string result;

	cin >> age >> gender;

	if (age < 16) {
		if (gender == 'm') {
			result = "Master";
		}
		else if (gender == 'f') {
			result = "Miss";
		}
	}
	else if (age >= 16) {
		if (gender == 'm') {
			result = "Mr.";
		}
		else if (gender == 'f') {
			result = "Ms.";
		}
	}
	cout << result;
}