#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int days, foodBought;
	double dogFoodPerDay, catFoodPerDay, turtleFoodPerDayInGrams;

	cin >> days >> foodBought >> dogFoodPerDay >> catFoodPerDay >> turtleFoodPerDayInGrams;

	double dogFood = days * dogFoodPerDay;
	double catFood = days * catFoodPerDay;
	double turtleFoodInGrams = days * turtleFoodPerDayInGrams;
	double turtleFood = turtleFoodInGrams / 1000;

	double totalFood = dogFood + catFood + turtleFood;

	if (foodBought >= totalFood) {
		cout << floor(foodBought - totalFood) << " kilos of food left.";
	}
	else {
		cout << ceil(totalFood - foodBought) << " more kilos of food are needed.";
	}
}