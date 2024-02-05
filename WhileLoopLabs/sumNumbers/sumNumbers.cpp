#include <iostream>
using namespace std;

int main()
{
	int maxNum = 0;
	int num = 0;
	int numSum = 0;

	cin >> maxNum;

	while (maxNum > numSum) {
		cin >> num;
		numSum += num;
	}
	cout << numSum;

}