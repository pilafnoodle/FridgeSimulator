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
        int daysInFridge;

    public:
        Food(string, int){
            name = n;
            lifetime = t;
        }
};

class RawFood: public Food
{
    public:
};

class CookedFood: public Food
{
    public:
        vector<RawFood> ingredients;
};
