#include <iostream>
using namespace std;

int main()
{
	int degrees = 0;
	string time, outfit, shoes;

	cin >> degrees >> time;

	if (10 <= degrees && degrees <= 18) {
		if (time == "Morning") {
			outfit = "Sweatshirt";
			shoes = "Sneakers";
		}
		else if (time == "Afternoon") {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
		else if (time == "Evening") {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
	}
	else if (18 < degrees && degrees <= 24) {
		if (time == "Morning") {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
		else if (time == "Afternoon") {
			outfit = "T-Shirt";
			shoes = "Sandals";
		}
		else if (time == "Evening") {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
	}
	else if (degrees >= 25) {
		if (time == "Morning") {
			outfit = "T-Shirt";
			shoes = "Sandals";
		}
		else if (time == "Afternoon") {
			outfit = "Swim Suit";
			shoes = "Barefoot";
		}
		else if (time == "Evening") {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
	}

	cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << ".";

}