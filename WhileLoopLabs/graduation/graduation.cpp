#include <iostream>
using namespace std;

int main()
{
	string name;
	cin >> name;

	int grades = 0;
	double grade = 0.0;
	double avgGrade = 0.0;
	int f = 0;
	bool excluded = false;

	while (grades < 12) {
		cin >> grade;
		if (grade >= 4.00) {
			avgGrade += grade;
		}
		else {
			f += 1;
		}

		if (f >= 2) {
			excluded = true;
			break;
		}
		grades += 1;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (excluded) {
		cout << name << " has been excluded at " << grades << " grade";
	}
	else {
		cout << name << " graduated. Average grade: " << avgGrade / grades;
	}


}