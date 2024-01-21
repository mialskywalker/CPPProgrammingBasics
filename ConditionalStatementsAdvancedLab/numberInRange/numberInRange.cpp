#include <iostream>
using namespace std;

int main()
{
	int number;
	string result;
	
	cin >> number;

	if (number >= -100 && number <= 100 && number != 0) {
		result = "Yes";
	}
	else {
		result = "No";
	}

	cout << result;
}