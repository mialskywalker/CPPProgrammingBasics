#include <iostream>
using namespace std;

int main()
{
	int first;
	int second;
	int third;

	cin >> first >> second >> third;

	int totalTime = first + second + third;
	int minutes = totalTime / 60;
	int seconds = totalTime % 60;

	if (seconds < 10) {
		cout << minutes << ":0" << seconds;
	}
	else {
		cout << minutes << ":" << seconds;
	}
}