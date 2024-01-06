#include <iostream>
using namespace std;

int main() {
    double depositAmount = 0.0;
    int depositTerm = 0.0;
    double APR = 0.0;
    double total = 0.0;

    cin >> depositAmount >> depositTerm >> APR;

    double interest = depositAmount * (APR / 100);
    double interestForOneMonth = interest / 12;
    total = depositAmount + (depositTerm * interestForOneMonth);

    cout << total;
}
