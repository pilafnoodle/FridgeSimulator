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
        std::vector<Food> items;
    
    private:
        string name;
        int capacity;
        double lifetimeExtended;

};

#endif
// #ifndef _STORAGE_H_
// #define _STORAGE_H_

// #include "food.h"
// #include <vector>
// #include <string>


// using namespace std;

// class Storage {
//     public:
//         Storage(string name,int capacity, double spoilRate);
//         void addFood(Food newItem); // Need to add parameter from food file
//         void removeFood(string name); // Need to add parameter from food file
//         string getName();

//     private:
//         string name;
//         int capacity;
//         double spoilRate;
//         std::vector<Food> items;

// };

// #endif