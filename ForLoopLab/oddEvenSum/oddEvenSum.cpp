#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n = 0;
	int a = 0;
	int evenSum = 0;
	int oddSum = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (i % 2 == 0) {
			evenSum += a;
		}
		else {
			oddSum += a;
		}
	}
	if (evenSum == oddSum) {
		cout << "Yes" << endl << "Sum = " << evenSum;
	}
	else {
		cout << "No" << endl << "Diff = " << abs(evenSum - oddSum);
	}
}