#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.precision(2);
	int countAllTickets = 0;
	int countAllStudentTickets = 0;
	int countAllStandardTickets = 0;
	int countAllKidsTickets = 0;
	string input;
	getline(cin, input);

	while (input != "Finish") {
		string movieName = input;
		int countFree;
		cin >> countFree;
		int takenSeats = 0;
		string ticketType;
		cin >> ticketType;

		while (ticketType != "End") {
			if (ticketType == "kid") {
				countAllKidsTickets++;
			}
			else if (ticketType == "standard") {
				countAllStandardTickets++;
			}
			else if (ticketType == "student") {
				countAllStudentTickets++;
			}
			takenSeats++;
			countAllTickets++;

			if (takenSeats == countFree) {
				break;
			}
			cin >> ticketType;
		}
		double percentFullHall = (takenSeats * 1.0 / countFree) * 100;
		cout << movieName << " - " << percentFullHall << "% full." << endl;
		cin.ignore();
		getline(cin, input);
	}

	cout << "Total tickets: " << countAllTickets << endl;
	double percentStudent = (countAllStudentTickets * 1.0 / countAllTickets) * 100;
	double percentStandard = (countAllStandardTickets * 1.0 / countAllTickets) * 100;
	double percentKid = (countAllKidsTickets * 1.0 / countAllTickets) * 100;

	cout << percentStudent << "% student tickets." << endl;
	cout << percentStandard << "% standard tickets." << endl;
	cout << percentKid << "% kids tickets." << endl;
}
