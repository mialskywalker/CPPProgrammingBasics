#include <iostream>
using namespace std;

int main()
{
	double input;
	cin >> input;

	int amount = 100 * input;
	
	int change = 0;
	int coins = 0;

	while (change < amount) {
		
		int diff = amount - change;

		if (diff >= 200) change += 200;
		else if (diff >= 100) change += 100;
		else if (diff >= 50) change += 50;
		else if (diff >= 20) change += 20;
		else if (diff >= 10) change += 10;
		else if (diff >= 5) change += 5;
		else if (diff >= 2) change += 2;
		else change += 1;
		
		coins++;
	}
	cout << coins;
}