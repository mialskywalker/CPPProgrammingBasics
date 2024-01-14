#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	string seriesName;
	int episodeLength, lunchBreak;

	getline(cin, seriesName);
	cin >> episodeLength >> lunchBreak;

	double lunch = double(lunchBreak) / 8;
	double rest = double(lunchBreak) / 4;
	double total = lunch + rest;
	double timeLeft = lunchBreak - total;

	if (episodeLength <= timeLeft) {
		cout << "You have enough time to watch " << seriesName << " and left with " << ceil(timeLeft - episodeLength) << " minutes free time.";
	}
	else {
		cout << "You don't have enough time to watch " << seriesName << ", you need " << ceil(episodeLength - timeLeft) << " more minutes.";
	}
}