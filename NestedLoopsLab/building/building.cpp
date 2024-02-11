#include <iostream>
using namespace std;

int main()
{
	int stores = 0;
	int rooms = 0;
	int currentRoom = 0;

	cin >> stores >> rooms;
	int currentStore = stores;
	while (currentStore >= 1) {


		currentRoom = 0;
		while (currentRoom < rooms) {

			if (currentStore == stores) {
				cout << "L" << currentStore << currentRoom << " ";
			}
			else if (currentStore % 2 == 0) {
				cout << "O" << currentStore << currentRoom << " ";
			}
			else {
				cout << "A" << currentStore << currentRoom << " ";
			}
			currentRoom++;
		}
		cout << endl;
		currentStore--;

	}
}