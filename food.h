#ifndef _FOOD_H_
#define _FOOD_H_

#include <string>
#include <vector>
using namespace std;

class Food
{
    private:
        string name;
        string category;
        int lifetime;
        int daysInFridge=0;

    public:
        Food(string,string);
        string getName();
        int getLifetime();
        int getDaysInFridge();
        void addOneDay();

};

class RawFood: public Food
{
    public:
        RawFood(string,string); 
};

class CookedFood: public Food
{
    public:
        vector<RawFood> ingredients;
};

#endif
