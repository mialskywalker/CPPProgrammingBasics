#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int tournamentCount = 0;
	int startingPoints = 0;
	string tournament;

	cin >> tournamentCount >> startingPoints;
	int totalPoints = startingPoints;
	double averagePoints = 0.0;
	double tournamentsWon = 0.0;


	for (int i = 1; i <= tournamentCount; i++)
	{
		cin >> tournament;

		if (tournament == "W") {
			tournamentsWon += 1;
			totalPoints += 2000;
		}
		else if (tournament == "F") {
			totalPoints += 1200;
		}
		else if (tournament == "SF") {
			totalPoints += 720;
		}
	}
	averagePoints = totalPoints - startingPoints;
	averagePoints /= tournamentCount;

	tournamentsWon = (tournamentsWon / double(tournamentCount)) * 100;

	cout << "Final points: " << totalPoints << endl << "Average points: " << floor(averagePoints) << endl;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << tournamentsWon << "%";

}