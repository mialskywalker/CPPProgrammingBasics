#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double clamPrice = 7.5;
	double skumriyaPrice = 0.0;
	double cacaPrice = 0.0;
	double palamudKG = 0.0;
	double safridKG = 0.0;
	double clamKG = 0.0;

	cin >> skumriyaPrice >> cacaPrice >> palamudKG >> safridKG >> clamKG;

	double palamudPrice = skumriyaPrice + (skumriyaPrice * 0.6);
	double safridPrice = cacaPrice + (cacaPrice * 0.8);

	double palamud = palamudKG * palamudPrice;
	double safrid = safridKG * safridPrice;
	double clam = clamKG * clamPrice;

	double total = palamud + safrid + clam;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << total;
}