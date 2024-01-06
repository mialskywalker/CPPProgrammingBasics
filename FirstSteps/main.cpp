#include <iostream>
using namespace std;

int main() {
    const double DOG_FOOD = 2.5;
    const double CAT_FOOD = 4.0;

    int dogPackets = 0;
    int catPackets = 0;
    double result = 0.0;

    cin >> dogPackets >> catPackets;
    result = (dogPackets * DOG_FOOD) + (catPackets * CAT_FOOD);

    cout << result << " lv.";
}
