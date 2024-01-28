#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int a = 0;
	int result = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		result += a;
	}
	cout << result;
}