#include <iostream>
#include "storage.h"

Storage::Storage(string name, int capacity, double spoilRate)
{
    // Storage class::Constructor(capacity, spoilRate)
    this->name = name;
    this->capacity = capacity;
    this->spoilRate = spoilRate;
}

/*string Storage::getName()
{
    return name;
}*/

void Storage::addFood(Food &foodItem)
{
    // Doesn't exceed capacity
    if (items.size() < capacity)
    {
        items.push_back(foodItem);

        std::cout << "New addition: " << getName() << std::endl;
    }

    // Exceeds capacity
    else
    {
        std::cout << "There is no space in the storage to add " << getName() << ".";
    }
}

void Storage::removeFood(string name)
{
    bool check = false;

    for (int i = 0; i < static_cast<int>(items.size()); i++)
    {
        if(items[i].getName() == name) {
            check = true;
            items.erase(items.begin() + i);

            std::cout << "Removed food item " << name << std::endl;
            --i;
            break;
        }
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