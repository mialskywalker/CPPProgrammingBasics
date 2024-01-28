#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	double p1 = 0.0;
	double p2 = 0.0;
	double p3 = 0.0;
	double p4 = 0.0;
	double p5 = 0.0;
	int a = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;

		if (a < 200 && a >= 1) {
			p1 += 1;
		}
		else if (a >= 200 && a < 400) {
			p2 += 1;
		}
		else if (a >= 400 && a < 600) {
			p3 += 1;
		}
		else if (a >= 600 && a < 800) {
			p4 += 1;
		}
		else if (a >= 800) {
			p5 += 1;
		}
	}

	p1 = p1 / n * 100;
	p2 = p2 / n * 100;
	p3 = p3 / n * 100;
	p4 = p4 / n * 100;
	p5 = p5 / n * 100;


	cout.setf(ios::fixed);
	cout.precision(2);

	cout << p1 << "%" << endl << p2 << "%" << endl << p3 << "%" << endl << p4 << "%" << endl << p5 << "%" << endl;
}