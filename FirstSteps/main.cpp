#include <iostream>
using namespace std;

int main() {
    const double PRICE_FOR_ONE_SQM = 7.61;
    const double DISCOUNT = 0.18;

    double sqm = 0;
    double price = 0;
    double discount = 0;
    double finalPrice = 0;

    cin >> sqm;

    price = sqm * PRICE_FOR_ONE_SQM;
    discount = price * DISCOUNT;
    finalPrice = price - discount;

    cout << "The final price is: " << finalPrice << " lv." << endl << "The discount is: " << discount << " lv.";

}
