#include <iostream>
using namespace std;

int main()
{
	int firstNumber = 0;
	int secondNumber = 0;
	int even = 0;
	int odd = 0;
	
	cin >> firstNumber >> secondNumber;

	for (int number = firstNumber; number <= secondNumber; number++) {

		int first = number % 10;
		int second = (number / 10) % 10;
		int third = (number / 100) % 10;
		int fourth = (number / 1000) % 10;
		int fifth = (number / 10000) % 10;
		int sixth = number / 100000;

		even = second + fourth + sixth;
		odd = first + third + fifth;

		if (even == odd) {
			cout << number << " ";
		}
	}
}