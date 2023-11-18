#include "food.h"
#include <vector>

class Storage {
    public:
        Storage(int capacity, double spoilRate);
        void addFood(); // Need to add parameter from food file
    private:
        int capacity;
        double spoilRate;
        std::vector<Food> items;

};