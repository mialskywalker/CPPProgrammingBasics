#include <iostream>
using namespace std;

int main()
{
	int first = 0;
	int second = 0;
	int third = 0;
	int result = 0;
	int combinations = 0;
	int input = 0;

	cin >> input;

	while (first <= input) {
		second = 0;
		while (second <= input) {
			third = 0;
			while (third <= input) {
				result = first + second + third;
				if (result == input) {
					combinations += 1;
					break;
				}
				third += 1;
			}
			second += 1;
		}
		first += 1;
	}

	cout << combinations;
}