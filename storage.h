#ifndef _STORAGE_H_
#define _STORAGE_H_

#include "food.h"
#include <string>
#include <vector>

using namespace std;

class Storage {
    public:
        Storage(string name, int capacity, double spoilRate);
        void addFood(Food& food); // Parameter referencing #food.h file
        void removeFood(string name);
        string getName();
        void displayItems(); // lookAtStorage
    
    private:
        string name;
        int capacity;
        double spoilRate;
        std::vector<Food> items;
};

/*class Freezer: public Storage {
    public:
    Freezer(string food, int capacity, double spoilRate);
};

class Fridge: public Storage {
    public:
    Fridge(string food, int capacity, double spoilRate);
};

class Pantry: public Storage {
    public:
    Pantry(string food, int capacity, double spoilRate);
};*/

#endif