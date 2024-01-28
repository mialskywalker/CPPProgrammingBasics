#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int salary = 0;
	int toLose = 0;
	string tabName;
	bool salaryLost = false;

	cin >> n >> salary;

	for (int i = 1; i <= n; i++)
	{
		cin >> tabName;

		if (tabName == "Facebook") {
			toLose += 150;
		}
		else if (tabName == "Instagram") {
			toLose += 100;
		}
		else if (tabName == "Reddit") {
			toLose += 50;
		}
		if (toLose >= salary) {
			cout << "You have lost your salary.";
			salaryLost = true;
			break;
		}
	}

	if (!salaryLost) {
		cout << salary - toLose;
	}

}