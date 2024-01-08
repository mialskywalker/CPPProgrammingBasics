#include <iostream>
using namespace std;

int main()
{
	const double pi = 3.14159265358979323846;
	double r = 0.0;

	cin >> r;

	double area = pi * (r * r);
	double perimeter = 2 * pi * r;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << area << endl << perimeter;
}