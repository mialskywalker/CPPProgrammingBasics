#include <iostream>
using namespace std;

int main()
{
	string product, result;

	cin >> product;

	if (product == "banana" || product == "apple" || product == "kiwi" || product == "cherry" || product == "lemon" || product == "grapes") {
		result = "fruit";
	}
	else if (product == "tomato" || product == "cucumber" || product == "pepper" || product == "carrot") {
		result = "vegetable";
	}
	else {
		result = "unknown";
	}

	cout << result;
}