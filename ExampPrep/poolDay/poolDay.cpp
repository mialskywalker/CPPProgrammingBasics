#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int peopleNum = 0;
	double entry = 0.0;
	double priceForOneLounger = 0.0;
	double priceForOneUmbrella = 0.0;

	cin >> peopleNum >> entry >> priceForOneLounger >> priceForOneUmbrella;

	double totalEntry = peopleNum * entry;
	int loungers = ceil(peopleNum * 0.75);
	double loungersPrice = priceForOneLounger * loungers;
	int umbrellas = ceil(peopleNum * 0.5);
	double umbrellasPrice = priceForOneUmbrella * umbrellas;

	double total = totalEntry + loungersPrice + umbrellasPrice;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << total << " lv.";
}