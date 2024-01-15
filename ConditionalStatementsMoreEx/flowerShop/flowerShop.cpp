#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double MAGNOLII = 3.25;
	const double ZYUMBYULI = 4.0;
	const double ROZI = 3.5;
	const double KAKTUSI = 8.0;

	int magnoliiCount, zyumbyuliCount, roziCount, kaktusiCount;
	double presentPrice = 0.0;

	cin >> magnoliiCount >> zyumbyuliCount >> roziCount >> kaktusiCount >> presentPrice;

	double total = (magnoliiCount * MAGNOLII) + (zyumbyuliCount * ZYUMBYULI) + (roziCount * ROZI) + (kaktusiCount * KAKTUSI);
	total -= total * 0.05;

	if (presentPrice > total) {
		cout << "She will have to borrow " << ceil(presentPrice - total) << " leva.";
	}
	else {
		cout << "She is left with " << floor(total - presentPrice) << " leva.";
	}
}