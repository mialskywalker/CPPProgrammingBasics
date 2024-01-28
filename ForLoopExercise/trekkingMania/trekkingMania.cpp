#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int group = 0;
	int totalCount = 0;
	double musala = 0.0;
	double montblanc = 0.0;
	double kilimandjaro = 0.0;
	double k2 = 0.0;
	double everest = 0.0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> group;

		if (group <= 5) {
			musala += group;
		}
		else if (group >= 6 && group <= 12) {
			montblanc += group;
		}
		else if (group >= 13 && group <= 25) {
			kilimandjaro += group;
		}
		else if (group >= 26 && group <= 40) {
			k2 += group;
		}
		else if (group >= 41) {
			everest += group;
		}
	}

	totalCount = musala + montblanc + kilimandjaro + k2 + everest;

	musala = musala / totalCount * 100;
	montblanc = montblanc / totalCount * 100;
	kilimandjaro = kilimandjaro / totalCount * 100;
	k2 = k2 / totalCount * 100;
	everest = everest / totalCount * 100;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << musala << "%" << endl << montblanc << "%" << endl << kilimandjaro << "%" << endl << k2 << "%" << endl << everest << "%" << endl;

}