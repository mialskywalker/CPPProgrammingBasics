#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double record = 0.0;
	double distance = 0.0;
	double timePerOne = 0.0;

	cin >> record >> distance >> timePerOne;

	double rawTime = distance * timePerOne;
	double delay = floor(distance / 15) * 12.5;
	double totalTime = rawTime + delay;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (totalTime < record) {
		cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds.";
	}
	else {
		cout << "No, he failed! He was " << totalTime - record << " seconds slower.";
	}

}