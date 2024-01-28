#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	int result = 0;

	getline(cin, text);

	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == 'a') {
			result += 1;
		}
		else if (text[i] == 'e') {
			result += 2;
		}
		else if (text[i] == 'i') {
			result += 3;
		}
		else if (text[i] == 'o') {
			result += 4;
		}
		else if (text[i] == 'u') {
			result += 5;
		}
	}
	cout << result;
}