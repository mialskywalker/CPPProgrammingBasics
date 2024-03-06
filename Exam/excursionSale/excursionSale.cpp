#include <iostream>
using namespace std;

int main()
{
	int seaCount = 0;
	int mountainCount = 0;
	string packageType;

	cin >> seaCount >> mountainCount >> packageType;

	int hasPackages = seaCount + mountainCount;
	int total = 0;

	while (packageType != "Stop") {

		
		if (packageType == "sea") {
			if (seaCount > 0) {
				total += 680;
				seaCount--;
				hasPackages--;
			}
		}
		else if (packageType == "mountain") {
			if (mountainCount > 0) {
				total += 499;
				mountainCount--;
				hasPackages--;
			}			
		}
		if (hasPackages <= 0) {
			break;
		}
		cin >> packageType;
	}


	if (hasPackages <= 0) {
		cout << "Good job! Everything is sold." << endl;
	}
	cout << "Profit: " << total << " leva.";

}