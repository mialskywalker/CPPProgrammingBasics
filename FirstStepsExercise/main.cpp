#include <iostream>
using namespace std;

int main() {
    const double PEN_PRICE = 5.80;
    const double MARKER_PRICE = 7.20;
    const double CLEANING_SOLUTION = 1.20;

    int penCount = 0;
    int markerCount = 0;
    int cleanerLiters = 0;
    int discountPercentage = 0;

    cin >> penCount >> markerCount >> cleanerLiters >> discountPercentage;

    double pen = penCount * PEN_PRICE;
    double marker = markerCount * MARKER_PRICE;
    double cleaner = cleanerLiters * CLEANING_SOLUTION;

    double total = (pen + marker + cleaner) - ((pen + marker + cleaner) * (double(discountPercentage) / 100));

    cout << total;
}
