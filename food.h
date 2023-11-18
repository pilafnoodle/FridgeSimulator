#ifndef _FOOD_H_
#define _FOOD_H_

#include <string>
#include <vector>
using namespace std;

class Food
{
    protected:
        string name;
        int lifetime;
        int daysInFridge;

    public:
        Food(string,int);
};

class RawFood: public Food
{
    public:
        // RawFood(string,int);

};

class CookedFood: public Food
{
    public:
        vector<RawFood> ingredients;
};

#endif