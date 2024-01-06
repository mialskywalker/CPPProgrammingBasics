#include <iostream>
using namespace std;

int main() {
    const double BGN = 1.79549;
    double usd = 0.0;
    double toBGN = 0.0;

    cin >> usd;

    toBGN = usd * BGN;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << toBGN;
}
