#include <iostream>
#include <string>
using namespace std;

int main()
{
	string actorName;
	string examinerName;
	double academyPoints = 0.0;
	int examinersCount = 0;
	double totalPoints = 0.0;
	double pointsGiven = 0.0;
	bool awardGiven = false;
	double points = 0.0;

	getline(cin, actorName);
	cin >> academyPoints >> examinersCount;

	cout.setf(ios::fixed);
	cout.precision(1);
	totalPoints += academyPoints;

	for (int i = 1; i <= examinersCount; i++)
	{
		getline(cin >> ws, examinerName);
		cin >> pointsGiven;

		points = examinerName.length() * pointsGiven / 2;
		totalPoints += points;
		if (totalPoints >= 1250.5) {
			awardGiven = true;
			cout << "Congratulations, " << actorName << " got a nominee for leading role with " << totalPoints << "!";
			break;
		}
	}

	if (!awardGiven) {
		cout << "Sorry, " << actorName << " you need " << 1250.5 - totalPoints << " more!";
	}
	
}