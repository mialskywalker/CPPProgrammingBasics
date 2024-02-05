#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int cakeLength, cakeWidth;
	cin >> cakeLength >> cakeWidth;

	int pieces = cakeLength * cakeWidth;

	while (pieces > 0) {
		string text;
		cin >> text;

		if (text == "STOP") {
			break;
		}

		int taken = stoi(text);

		pieces -= taken;

	}

	if (pieces <= 0) {
		cout << "No more cake left! You need " << abs(pieces) << " pieces more.";
	}
	else {
		cout << pieces << " pieces are left.";
	}
}