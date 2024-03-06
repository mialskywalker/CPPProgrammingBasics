#include <iostream>
using namespace std;

int main()
{
	const double BGN = 1.57;


	double cpuUsd = 0.0;
	double gpuUsd = 0.0;
	double ramUsd = 0.0;
	int ramCount = 0;
	double discountPercentage = 0.0;

	cin >> cpuUsd >> gpuUsd >> ramUsd >> ramCount >> discountPercentage;

	double cpuBgn = cpuUsd * BGN;
	double gpuBgn = gpuUsd * BGN;
	double ramBgn = ramUsd * BGN;
	double totalRam = ramBgn * ramCount;
	double totalCpu = cpuBgn - (cpuBgn * discountPercentage);
	double totalGpu = gpuBgn - (gpuBgn * discountPercentage);
	double total = totalCpu + totalGpu + totalRam;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Money needed - " << total << " leva.";
}