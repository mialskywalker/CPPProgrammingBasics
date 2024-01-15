#include <iostream>
using namespace std;

int main()
{
	int restDays;
	cin >> restDays;

	int workDays = 365 - restDays;
	int playTime = (restDays * 127) + (workDays * 63);

	if (playTime >= 30000) {
		int remaining = playTime - 30000;
		int hours = remaining / 60;
		int minutes = remaining % 60;
		cout << "Tom will run away" << endl << hours << " hours and " << minutes << " minutes more for play";
	}
	else {
		int remaining = 30000 - playTime;
		int hours = remaining / 60;
		int minutes = remaining % 60;
		cout << "Tom sleeps well" << endl << hours << " hours and " << minutes << " minutes less for play";
	}
}