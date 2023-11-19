#include <string>
#include "food.h"
#include <vector>
#include <iostream>
using namespace std;

// this constructor is the only thing that was originally in food
Food::Food(string n, string category){
    this->name=n;
    this->category=category;
    if(category=="1"){
        this->lifetime=4;
    }if(category=="2"){
        this->lifetime=2;
    }if(category=="3"){
        this->lifetime=3;
    }if(category=="4"){
        this->lifetime=100;
    }
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

int Food::getLifetime(){
    return lifetime;
}

void Food::addOneDay(){
    daysInFridge++;
}

int Food::getDaysInFridge(){
    return daysInFridge;
}