#include "Storage.h"
string Storage::getName(){
    return name;
}

Storage::Storage(string name,int capacity, double spoilRate){
    this->name=name;
    this->capacity=capacity;
    this->spoilRate=spoilRate;
}
