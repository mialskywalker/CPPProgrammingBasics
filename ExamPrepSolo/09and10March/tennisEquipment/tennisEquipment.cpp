#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double priceForOne = 0.0;
	int count = 0;
	int shoes = 0;

	cin >> priceForOne >> count >> shoes;

	double all = priceForOne * count;
	double shoesPrice = priceForOne / 6;
	double shoesTotal = shoesPrice * shoes;
	double total = all + shoesTotal;
	double otherEquipment = total * 0.2;
	total += otherEquipment;

	double paidByHim = total / 8;
	double sponsors = total * 7 / 8;

	cout << "Price to be paid by Djokovic " << floor(paidByHim) << endl << "Price to be paid by sponsors " << ceil(sponsors);
}