#include <iostream>
#include "storage.h"

Storage::Storage(string name, int capacity, double spoilRate)
{
    // Storage class::Constructor(capacity, spoilRate)
    this->name = name;
    this->capacity = capacity;
    this->spoilRate = spoilRate;
}

string Storage::getName()
{
    return name;
}

void Storage::addFood(Food& food)
{
    // Doesn't exceed capacity
    if (items.size() < capacity)
    {
        items.push_back(food);

        std::cout << "New addition: " << getName() << endl;
    }

    // Exceeds capacity
    else
    {
        std::cout << "There is no space in the storage to add " << getName() << ".";
    }
}

void Storage::displayItems()
{
    std::cout << "Storage:" << endl;

    for (int i = 0; i < items.size(); i++)
    {
        Food &item = items[i]; //
        // std::cout << item.getName() << endl;
    }
}