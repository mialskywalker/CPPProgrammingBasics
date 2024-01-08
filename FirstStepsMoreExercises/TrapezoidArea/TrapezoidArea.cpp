#include <iostream>
using namespace std;

int main()
{
    double b1 = 0.0;
    double b2 = 0.0;
    double h = 0.0;

    cin >> b1 >> b2 >> h;

    double area = (b1 + b2) * h / 2;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << area;
}

