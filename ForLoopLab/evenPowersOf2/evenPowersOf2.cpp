#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 0;

    cin >> n;

	for (int i = 0; i <= n; i+=2)
	{
		cout << pow(2, i) << endl;
	}
}