#include <iostream>
using namespace std;

int main()
{
    int tax = 0;

    cin >> tax;

    double shoes = double(tax) - (double(tax) * 0.4);
    double kit = shoes - (shoes * 0.2);
    double ball = kit / 4;
    double accessories = ball / 5;

    double total = tax + shoes + kit + ball + accessories;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << total;
}