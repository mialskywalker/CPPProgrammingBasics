#include <iostream>
using namespace std;

int main() {
    int pagesCount = 0;
    int pagesPerHour = 0;
    int daysCount = 0;

    cin >> pagesCount >> pagesPerHour >> daysCount;

    cout << (pagesCount / pagesPerHour) / daysCount;
}
