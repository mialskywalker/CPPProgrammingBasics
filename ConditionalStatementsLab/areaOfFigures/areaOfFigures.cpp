#include <iostream>
using namespace std;

int main()
{
	string figure;
	double pi = 3.14159265359;
	double area;

	cin >> figure;

	if (figure == "square") {
		double a;
		cin >> a;
		area = a * a;
	}
	else if (figure == "rectangle") {
		double a;
		double b;
		cin >> a >> b;
		area = a * b;
	}
	else if (figure == "circle") {
		double r;
		cin >> r;
		area = pi * r * r;
	}
	else if (figure == "triangle") {
		double a;
		double h;
		cin >> a >> h;
		area = a * h / 2;
	}

	cout.setf(ios::fixed);
	cout.precision(3);
	cout << area;
}