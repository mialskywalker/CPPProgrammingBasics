#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n = 0;
	int max_num = INT_MIN;
	int min_num = INT_MAX;
	int num = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num >= max_num) {
			max_num = num;
		}
		if (num <= min_num) {
			min_num = num;
		}
	}

	cout << "Max number: " << max_num << endl << "Min number: " << min_num;
}