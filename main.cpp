#include "food.h"
#include "storage.h"
#include <iostream>
#include <stdio.h>
using namespace std;

void putNewItemsInStorage(Storage s){
    cout<<"You are putting items inside your "<<s.getName()<<endl;
    string foodName;
    string input;
    int category;
    while(input!="q"){
        cout<<"enter name of item(q to quit): "<<endl;
        cin>>foodName;
        if(foodName=="q"){
            break;
        }
        cout<<"enter category (1 for vegetables, 2 for dairy, 3 for meat, 4 for grains and 5 for preserved food)"<<endl;
        cin>>category;
        // RawFood newItem(foodName,category);
        // s.addFood(newItem);      
    }
}

void printMenu(){
    cout<<"c: lets cook something baby"<<endl;
    cout<<"l: look at storage"<<endl;
    cout<<"s: go to bed and end the day"<<endl;
}


int main(){

    int daysPassed=0;
    Storage freezer("Freezer",10,0.0);
    Storage pantry("Pantry",20,5.0);
    Storage fridge("Fridge",8,2.0);
    

    vector<Storage> container={fridge,freezer,pantry};
    putNewItemsInStorage(s);//ask if user wants to put anything in storage


    return 0;
    bool endOfDay=false;
    while(daysPassed<365){
    
        // showStatusOfContainers();
        for(Storage s:container){
            putNewItemsInStorage(s);//ask if user wants to put anything in storage
            printMenu();
            char input;
            cin>>input;
            switch(input){
                case 'c':
                    // cookFood();
                case 'l':
                    // lookAtStorage();
                case 's':
                    endOfDay=true;
                    
            }   
        }
        // incrementEachDaysInFridge();
        daysPassed++;
    }
    return 0;
}



