#include <iostream>
#include <string>
using namespace std;

int main()
{
	int f = 0;
	int poorGrades = 0;
	string assignment;
	int grade = 0;
	double avgGrade = 0.0;
	int problems = 0;
	string last;
	bool poor = false;

	cin >> f;
	cin.ignore();

	getline(cin, assignment);

	while (assignment != "Enough") {
		cin >> grade;
		last = assignment;
		avgGrade += grade;
		problems++;
		if (grade <= 4) {
			poorGrades++;
			if (poorGrades >= f) {
				poor = true;
				break;
			}
		}
		cin.ignore();
		getline(cin, assignment);
	}

	if (poor) {
		cout << "You need a break, " << f << " poor grades.";
	}
	else {
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << "Average score: " << avgGrade / problems << endl << "Number of problems: " << problems << endl << "Last problem: " << last;
	}
}