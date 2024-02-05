#include <iostream>
using namespace std;

int main()
{
	int num;
	int k = 1;
	cin >> num;

	while (k <= num) {
		cout << k << endl;
		k = (k * 2) + 1;
	}
}