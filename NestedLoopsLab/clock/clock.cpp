#include <iostream>
using namespace std;

int main()
{
	int hour = 0;
	int minute = 0;

	while (hour < 24) {
		minute = 0;
		while (minute <= 59) {
			cout << hour << ":" << minute << endl;
			minute += 1;
		}
		hour += 1;
	}
}