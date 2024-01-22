#include <iostream>
using namespace std;

int main()
{
	string projection;
	int rows, columns;
	double result;

	cin >> projection >> rows >> columns;

	if (projection == "Premiere") {
		result = rows * columns * 12.0;
	}
	else if (projection == "Normal") {
		result = rows * columns * 7.5;
	}
	else if (projection == "Discount") {
		result = rows * columns * 5.0;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << result << " leva";
}