#include <iostream>
using namespace std;

int main()
{
	int number = 0;

	cin >> number;

	if (!(number >= 100 && number <= 200 || number == 0)) {
		cout << "invalid";
	}
}