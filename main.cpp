#include "food.h"
#include "storage.h"
#include <iostream>
#include <stdio.h>
using namespace std;

void putNewItemsInStorage(Storage& s){
    cout<<"You are putting items inside your "<<s.getName()<<endl;
    string foodName;
    string input;
    string category;
    while(input!="q"){
        cout<<"enter name of item (q to quit): "<<endl;
        cin>>foodName;
        if(foodName=="q"){
            break;
        }
        cout<<"enter category (1 for vegetables, 2 for dairy, 3 for meat, 4 for grains and 5 for preserved food)"<<endl;
        cin>>category;
        RawFood newItem(foodName,category);
        s.addFood(newItem);      
    }
    cout<<endl;
}

void printMenu(){
    cout<<"c: lets cook something baby"<<endl;
    cout<<"s: go to bed and end the day"<<endl;
    cout<<endl;
}


int main(){

    int daysPassed=0;
    Storage freezer("Freezer",2,0.0);
    Storage pantry("Pantry",20,5.0);
    Storage fridge("Fridge",8,2.0);
    
    bool endOfDay=false;
    while(daysPassed<365){

        putNewItemsInStorage(freezer);
        putNewItemsInStorage(pantry);
        putNewItemsInStorage(fridge);

        printMenu();
            char input;
            cin>>input;
            switch(input){
                case 'c':
                    cook();
                case 's':
                    endOfDay=true;
                    
            }   

        pantry.displayItems();
        freezer.displayItems();
        fridge.displayItems();
        cout<<endl;
        incrementEachDaysInFridge();
        daysPassed++;
    }
    return 0;
}



