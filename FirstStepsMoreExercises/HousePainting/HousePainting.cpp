#include <iostream>
using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	double h = 0.0;

	cin >> x >> y >> h;

	double sideWall = x * y;
	double window = 1.5 * 1.5;

	double sides = 2 * sideWall - 2 * window;

	double backWall = x * x;
	double frontDoor = 2 * 1.2;

	double frontBack = 2 * backWall - frontDoor;

	double totalAreaGreen = sides + frontBack;
	double green = totalAreaGreen / 3.4;

	double roofRect = 2 * (x * y);
	double triangles = 2 * (x * h / 2);
	
	double totalAreaRed = roofRect + triangles;
	double red = totalAreaRed / 4.3;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << green << endl << red;

}