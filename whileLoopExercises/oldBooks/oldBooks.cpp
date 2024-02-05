#include <iostream>
#include <string>
using namespace std;

int main()
{
	int booksSearched = 0;
	string bookToFind;
	string currentBook;
	bool isNotFound = false;

	getline(cin, bookToFind);
	//cin.ignore();
	getline(cin, currentBook);
	//cin.ignore();

	while (bookToFind != currentBook) {
		if (currentBook == "No More Books") {
			isNotFound = true;
			break;
		}
		getline(cin, currentBook);
		booksSearched += 1;

		//cin.ignore();
	}

	if (isNotFound) {
		cout << "The book you search is not here!" << endl << "You checked " << booksSearched << " books.";
	}
	else {
		cout << "You checked " << booksSearched << " books and found it.";
	}

}