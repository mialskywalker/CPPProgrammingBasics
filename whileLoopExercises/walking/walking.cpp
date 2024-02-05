#include <iostream>
#include <string>
using namespace std;

int main()
{
	int toReach = 10000;
	string text;
	int totalSteps = 0;

	while (totalSteps < toReach)
	{
		getline(cin, text);
		if (text == "Going home") {
			int steps;
			cin >> steps;
			cin.ignore();
			totalSteps += steps;
			break;
		}
		int steps = stoi(text);
		totalSteps += steps;
	}

	if (totalSteps >= toReach) {
		cout << "Goal reached! Good job!";
	}
	else {
		cout << toReach - totalSteps << " more steps to reach goal.";
	}
}