#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cozunacs = 0;
	cin >> cozunacs;
	string winner;
	int winningPoints = 0;

	for (int i = 0; i < cozunacs; i++)
	{
		cin.ignore();
		string name, input;
		getline(cin, name);
		int totalPoints = 0;

		cin >> input;

		while (input != "Stop") {

			int grade = stoi(input);
			totalPoints += grade;
			cin >> input;
		}

		cout << name << " has " << totalPoints << " points." << endl;

		if (totalPoints > winningPoints) {
			winningPoints = totalPoints;
			winner = name;
			cout << name << " is the new number 1!" << endl;
		}

	}

	cout << winner << " won competition with " << winningPoints << " points!";
}