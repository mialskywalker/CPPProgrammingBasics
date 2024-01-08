#include <iostream>
using namespace std;

int main()
{
    const double EURO_TO_BGN = 1.94;

    double kgVeggies = 0.0;
    double kgFruits = 0.0;
    double totalkgVeggies = 0.0;
    double totalkgFruits = 0.0;

    cin >> kgVeggies >> kgFruits >> totalkgVeggies >> totalkgFruits;

    double totalVeggies = kgVeggies * totalkgVeggies;
    double totalFruits = kgFruits * totalkgFruits;
    double totalBGN = totalVeggies + totalFruits;
    double totalEURO = totalBGN / EURO_TO_BGN;

    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << totalEURO;
}