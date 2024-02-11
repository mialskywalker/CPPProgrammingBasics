#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;

    while (input != "End")
    {
        
        string destination = input;
        
        double needBudget;
        cin >> needBudget;

        
        double savedMoney = 0;
        while (savedMoney < needBudget)
        {
            double sum;
            cin >> sum;
            savedMoney += sum;
        }
        cout << "Going to " << destination << "!" << endl;

        cin >> input;

    }
}