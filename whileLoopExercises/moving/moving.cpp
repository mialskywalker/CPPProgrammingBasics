#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int roomWidth, roomLength, roomHeight;
	cin >> roomWidth >> roomLength >> roomHeight;

	int freeSpace = roomWidth * roomLength * roomHeight;

	while (freeSpace > 0) {
		string text;
		cin >> text;

		if (text == "Done") {
			break;
		}

		int box = stoi(text);
		freeSpace -= box;
	}

	if (freeSpace > 0) {
		cout << freeSpace << " Cubic meters left.";
	}
	else {
		cout << "No more free space! You need " << abs(freeSpace) << " Cubic meters more.";
	}
}