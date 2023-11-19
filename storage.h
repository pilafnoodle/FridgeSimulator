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
        void incrementDaysInStorage();
        void checkSpoiled();
        std::vector<Food> items;
    
    private:
        string name;
        int capacity;
        double lifetimeExtended;

};

#endif
