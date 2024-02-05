#include <iostream>
using namespace std;

int main()
{
	string name, pass, passTry;
	cin >> name >> pass;

	while (pass != passTry) {
		cin >> passTry;
	}
	cout << "Welcome " << name << "!";
}