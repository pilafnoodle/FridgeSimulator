#include <iostream>
#include "storage.h"

Storage::Storage(string name, int capacity, double spoilRate)
{
    // Storage class::Constructor(capacity, spoilRate)
    this->name = name;
    this->capacity = capacity;
    this->spoilRate = spoilRate;
}

string Storage::getName() {
    return name;
}

void Storage::addFood(Food food)
{
    // Doesn't exceed capacity
    if (items.size() < capacity)
    {
        items.push_back(food);
        // std::cout << "New addition: " << food.getItem();
        // Exceeds capacity
    }

    else
    {
        std::cout << "There is no space in the storage.";
    }
}

/*void Storage::displayContents() const {
    std::cout << "Storage Items:\n":
    for()
}*/