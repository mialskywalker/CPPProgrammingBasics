#include <iostream>
using namespace std;

int main()
{
	double w = 0.0;
	double h = 0.0;

	cin >> w >> h;

	double width = w * 100;
	double height = h * 100;

	height -= 100;

	int tablesPerRow = int(height) / 70;
	int widthRows = int(width) / 120;
	int seats = tablesPerRow * widthRows - 3;

	cout << seats;

}