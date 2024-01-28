#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n = 0;
	int a = 0;
	int leftSum = 0;
	int rightSum = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		leftSum += a;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		rightSum += a;
	}

	if (leftSum == rightSum) {
		cout << "Yes, sum = " << leftSum;
	}
	else {
		cout << "No, diff = " << abs(leftSum - rightSum);
	}
}