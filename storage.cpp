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
        std::cout << "There is no space in the storage to add " << getName() << "."<<endl;
    }
}

/*void Storage::removeFood(string name) {

}*/

void Storage::displayItems()
{
    std::cout << this->getName()<<"'s storage:" << endl;
    for (int i = 0; i < items.size(); i++)
    {
        std::cout << items.at(i).getName() << "-" <<items.at(i).getDaysInFridge()<<" days old"<<endl;
    }
}


//>>>>>>>>>>>>>>>>>>>>>>. old
// #include "Storage.h"
// string Storage::getName(){
//     return name;
// }

// Storage::Storage(string name,int capacity, double spoilRate){
//     this->name=name;
//     this->capacity=capacity;
//     this->spoilRate=spoilRate;
// }
