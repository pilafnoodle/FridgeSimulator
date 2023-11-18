#include <string>
#include "food.h"
#include <vector>
using namespace std;

// this constructor is the only thing that was originally in food
Food::Food(string n, string category){
    this->name=n;
    this->category=category;

    // this->lifetime=t;
}

RawFood::RawFood(string n, string category):Food(n,category){
    // this->name=n;
    // this->category=category;
    // // this->lifetime=t;
}

string Food::getName(){
    return name;
}

int Food::getDaysInFridge(){
    return daysInFridge;
}




