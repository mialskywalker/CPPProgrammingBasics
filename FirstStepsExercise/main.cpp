#include <iostream>
#include <math.h>
using namespace std;

int main() {
    const double PI = 3.14;
    double radians = 0.0;
    double degrees = 0.0;

    cin >> radians;

    degrees = radians * (180 / PI);
    degrees = round(degrees);

    cout << degrees;
}
