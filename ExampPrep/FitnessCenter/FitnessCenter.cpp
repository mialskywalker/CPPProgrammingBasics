#include <iostream>
#include <string>
using namespace std;

int main()
{
	int customers = 0;
	cin >> customers;

	int back = 0;
	int chest = 0;
	int legs = 0;
	int abs = 0;
	int shake = 0;
	int bar = 0;
	int training = 0;
	int buyers = 0;
	cin.ignore();

	for (int i = 0; i < customers; i++)
	{
		string input;
		getline(cin, input);
		if (input == "Back") {
			back++;
			training++;
		}
		else if (input == "Chest") {
			chest++;
			training++;
		}
		else if (input == "Legs") {
			legs++;
			training++;
		}
		else if (input == "Abs") {
			abs++;
			training++;
		}
		else if (input == "Protein shake") {
			shake++;
			buyers++;
		}
		else if (input == "Protein bar") {
			bar++;
			buyers++;
		}
	}

	double trainPercentage = double(training) / customers * 100;
	double buyPercentage = double(buyers) / customers * 100;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << back << " - back" << endl;
	cout << chest << " - chest" << endl;
	cout << legs << " - legs" << endl;
	cout << abs << " - abs" << endl;
	cout << shake << " - protein shake" << endl;
	cout << bar << " - protein bar" << endl;
	cout << trainPercentage << "% - work out" << endl;
	cout << buyPercentage << "% - protein" << endl;


}
