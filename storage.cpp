#include <iostream>
#include "storage.h"

Storage::Storage(string name, int capacity, double lifetimeExtended)
{
    // Storage class::Constructor(capacity, spoilRate)
    this->name = name;
    this->capacity = capacity;
    this->lifetimeExtended = lifetimeExtended;

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

void Storage::removeFood(string name)
{
    bool check = false;

    for (int i = 0; i < static_cast<int>(items.size()); i++)
    {
        if(items[i].getName() == name) {
            check = true;
            items.erase(items.begin() + i);
            std::cout << "Took out " << name << std::endl;
            --i;
            break;
        }
    }
}

void Storage::displayItems()
{
    std::cout << this->getName()<<"'s storage:" << endl;
    for (int i = 0; i < items.size(); i++)
    {
        std::cout << items.at(i).getName() << "-" <<items.at(i).getDaysInFridge()<<" days old";
        if(this->getName()=="Freezer"){
            cout<<", never expires. "<<endl;
        }else{
            cout<<", expiring in "<<(items.at(i).getLifetime()+this->lifetimeExtended)-items.at(i).getDaysInFridge()<<" days"<<endl;
        }
    }
}

// void Storage::checkSpoiled(){
//     for(unsigned i=0; i<items.size();i++){
//         if(items.at(i).getLifetime()+this->spoilRate)
//     }
// }

void Storage::incrementDaysInStorage(){
    for(unsigned i=0; i<items.size();i++){
        items.at(i).addOneDay();
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
