#include <iostream>
#include <string>
#include "food.h"
#include <vector>
using namespace std;

// food class with name of food and lifetime in fridge
class Food
{
    private:
        string name;
        int lifetime;
    public:
        Food(string n, int t)
        {
            name = n;
            lifetime = t;
        }
};

// raw food class that keeps track of the number of days in the fridge
class RawFood: public Food
{
    public:
        int daysInFridge;
};

// cooked food class with a vector array of ingredients
class CookedFood: public Food
{
    public:
        vector<RawFood> ingredients;
};
