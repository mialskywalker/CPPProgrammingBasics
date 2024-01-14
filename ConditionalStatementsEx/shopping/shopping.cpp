#include <iostream>
using namespace std;

int main()
{
	const double GPU_PRICE = 250.0;

	double budget = 0.0;
	int gpuCount, cpuCount, ramCount;

	cin >> budget >> gpuCount >> cpuCount >> ramCount;

	double gpuTotal = gpuCount * GPU_PRICE;
	double cpuTotal = cpuCount * (gpuTotal * 0.35);
	double ramTotal = ramCount * (gpuTotal * 0.1);

	double total = gpuTotal + cpuTotal + ramTotal;

	if (gpuCount > cpuCount) {
		total -= total * 0.15;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= total) {
		cout << "You have " << budget - total << " leva left!";
	}
	else {
		cout << "Not enough money! You need " << total - budget << " leva more!";
	}
}