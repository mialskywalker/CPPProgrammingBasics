#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main()
{
	int n = 0;
	int a = 0;
	int max_num = INT_MIN;
	int num_sum = 0;
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;

		if (a >= max_num) {
			max_num = a;
		}

		num_sum += a;
	}

	if (max_num == num_sum - max_num) {
		cout << "Yes" << endl << "Sum = " << max_num;
	}
	else {
		int difference = max_num - (num_sum - max_num);
		cout << "No" << endl << "Diff = " << abs(difference);
	}
}