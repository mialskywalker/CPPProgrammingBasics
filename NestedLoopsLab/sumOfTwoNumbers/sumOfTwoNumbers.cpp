#include <iostream>
using namespace std;

int main()
{
	int beggining = 0;
	int end = 0;
	int result = 0;
	int combinations = 0;
	int searched = 0;
	bool isFound = false;

	cin >> beggining >> end >> searched;
	int first = beggining;
	int second = beggining;

	while (first <= end) {
		second = beggining;
		while (second <= end) {

			result = first + second;
			combinations += 1;
			if (result == searched) {
				cout << "Combination N:" << combinations << " (" << first << " + " << second << " = " << result << ")";
				isFound = true;
				break;
			}
			second += 1;
		}
		if (isFound) {
			break;
		}
		first += 1;
	}

	if (!isFound) {
		cout << combinations << " combinations - neither equals " << searched;
	}
}