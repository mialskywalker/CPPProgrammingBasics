#include <iostream>
using namespace std;

int main()
{
	string password = "s3cr3t!P@ssw0rd";
	string triedPass;
	cin >> triedPass;

	if (triedPass == password) {
		cout << "Welcome";
	}
	else {
		cout << "Wrong password!";
	}
}