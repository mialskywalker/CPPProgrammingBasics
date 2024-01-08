#include <iostream>;
using namespace std;

int main() {

	double celsius = 0.0;
	
	cin >> celsius;

	double fahrenheit = celsius * 1.8 + 32;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << fahrenheit;

}