#include <iostream>
using namespace std;

int main()
{
	int first = 1;
	int second = 1;
	int result = 0;

	while (first <= 10) {
		second = 1;
		while (second <= 10) {
			result = first * second;
			cout << first << " * " << second << " = " << result << endl;
			second += 1;
		}
		first += 1;
	}
}