#include <iostream>
#include <string>
#include "food.h"
#include <vector>
using namespace std;
class Food
{
    protected:
        string name;
        int lifetime;
    public:
        Food(string n, int t)
        {
            name = n;
            lifetime = t;
        }
};

class RawFood: public Food
{
    public:
        int daysInFridge;
};

class CookedFood: public Food
{
    public:
        vector<RawFood> ingredients;
};
