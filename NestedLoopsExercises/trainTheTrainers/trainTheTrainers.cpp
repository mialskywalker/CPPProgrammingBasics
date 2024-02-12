#include <iostream>
#include <string>
using namespace std;

int main()
{
	int examiners = 0;
	cin >> examiners;
	cin.ignore();

	string input;
	getline(cin, input);
	double avgGrade = 0.0;
	double totalAvg = 0.0;
	int count = 0;

	cout.setf(ios::fixed);
	cout.precision(2);

	while (input != "Finish")
	{
		avgGrade = 0.0;
		for (int i = 1; i <= examiners; i++)
		{
			double grade = 0;
			cin >> grade;
			avgGrade += grade;
		}
		avgGrade = avgGrade / examiners;
		cout << input << " - " << avgGrade << "." << endl;
		totalAvg += avgGrade;
		count++;
		cin.ignore();
		getline(cin, input);
	}
	totalAvg = totalAvg / count;
	cout << "Student's final assessment is " << totalAvg << ".";
}