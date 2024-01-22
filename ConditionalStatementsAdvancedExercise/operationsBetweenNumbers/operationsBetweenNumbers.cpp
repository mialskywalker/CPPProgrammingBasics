#include <iostream>
using namespace std;

int main()
{
	int number1 = 0;
	int number2 = 0;
	char operation;
	string isEven;

	cin >> number1 >> number2 >> operation;

	switch (operation)
	{
	case '+':
		if ((number1 + number2) % 2 == 0) {
			isEven = "even";
		}
		else {
			isEven = "odd";
		}
		cout << number1 << " + " << number2 << " = " << number1 + number2 << " - " << isEven;
		break;

	case '-':
		if ((number1 - number2) % 2 == 0) {
			isEven = "even";
		}
		else {
			isEven = "odd";
		}
		cout << number1 << " - " << number2 << " = " << number1 - number2 << " - " << isEven;
		break;

	case '*':
		if ((number1 * number2) % 2 == 0) {
			isEven = "even";
		}
		else {
			isEven = "odd";
		}
		cout << number1 << " * " << number2 << " = " << number1 * number2 << " - " << isEven;
		break;

	case '/':
		if (number2 == 0) {
			cout << "Cannot divide " << number1 << " by zero";
		}
		else {
			double result = double(number1) / double(number2);
			cout.setf(ios::fixed);
			cout.precision(2);
			cout << number1 << " / " << number2 << " = " << result;
		}
		break;
		
	case '%':
		if (number2 == 0) {
			cout << "Cannot divide " << number1 << " by zero";
		}
		else {
			
			cout << number1 << " % " << number2 << " = " << number1 % number2;
		}
		break;
	default:
		break;
	}

}