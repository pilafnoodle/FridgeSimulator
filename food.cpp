#include <iostream>
#include <string>
#include <food.h>
#include <vector>
using namespace std;

/*
cout << "What food are you putting into the fridge?" << endl;
getline(cin, name);         // Asks user for food being placed in fridge
*/

class Food
{
    protected:
        string name;
        int lifetime;
    public:
        void setValue (string n, int t)
        {
            name = n;
            lifetime = t;
        }
}

class RawFood: public Food
{
    public:
        int daysInFridge;
}

class CookedFood: public Food
{
    public:
        vector<RawFood> ingredients;
}
