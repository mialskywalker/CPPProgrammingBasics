#include <iostream>
using namespace std;

int main()
{
	int K = 0;
	int L = 0;
	int M = 0;
	int N = 0;

	cin >> K >> L >> M >> N;

	int count = 0;
	bool done = false;

	for (int k = K; k <= 8 ; k++)
	{
		for (int l = 9; l >= L; l--)
		{
			for (int m = M; m <= 8; m++)
			{
				for (int n = 9; n >= N; n--)
				{
					if (k % 2 == 0 && l % 2 != 0 && m % 2 == 0 && n % 2 != 0) {

						if (k == m && l == n) {
							cout << "Cannot change the same player." << endl;
						}
						else {
							cout << k << l << " - " << m << n << endl;
							count++;
						}
					}
					
					if (count >= 6) {
						done = true;
						break;
					}

				}
				if (done) {
					break;
				}
			}
			if (done) {
				break;
			}
		}
		if (done) {
			break;
		}
	}

}