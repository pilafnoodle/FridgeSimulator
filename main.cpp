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
        cout<<"enter category (1 for produce, 2 for dairy, 3 for meat, 4 for grains"<<endl;
        cin>>category;
        RawFood newItem(foodName,category);
        s.addFood(newItem);      
    }
    cout<<endl;
}

void cook(Storage &fridge,Storage &freezer,Storage &pantry){
    string input;
    vector<string> foodNames;
    while(input!="q"){
        cout<<"pick ingriedients from your stock (q to stop): "<<endl;
        cin>>input;
        for(unsigned i=0; i<fridge.items.size();i++){
            if(fridge.items.at(i).getName()==input){
                foodNames.push_back(input);
                fridge.removeFood(input);
            }
        }
        for(unsigned i=0; i<freezer.items.size();i++){
            if(freezer.items.at(i).getName()==input){
                foodNames.push_back(input);
                freezer.removeFood(input);
            }
        }
        for(unsigned i=0; i<pantry.items.size();i++){
            if(pantry.items.at(i).getName()==input){
                foodNames.push_back(input);
                pantry.removeFood(input);
            }
        }
    }
    cout<<"you prepared an amazing dish of ";
    for(int i=0; i<foodNames.size();i++){
        cout<<foodNames.at(i)<<" ";
    }cout<<endl;
        

}


void printMenu(){
    cout<<"c: lets cook something baby"<<endl;
    cout<<"s: go to bed and end the day"<<endl;
    cout<<endl;
}


int main(){

    int daysPassed=0;
    Storage freezer("Freezer",8,100);
    Storage pantry("Pantry",20,2);
    Storage fridge("Fridge",8,4);
    
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
                    cook(fridge,freezer,pantry);// implement this
                case 's':
                    endOfDay=true;
                    
            }   

        pantry.displayItems();
        cout<<endl;
        freezer.displayItems();
        cout<<endl;
        fridge.displayItems();
        cout<<endl;

        pantry.incrementDaysInStorage();
        freezer.incrementDaysInStorage();
        fridge.incrementDaysInStorage();
        daysPassed++;
    }
    return 0;
}



