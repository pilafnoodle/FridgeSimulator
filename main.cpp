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
        bool found=false;
        for(unsigned i=0; i<fridge.items.size();i++){
            if(fridge.items.at(i).getName()==input){
                foodNames.push_back(input);
                fridge.removeFood(input);
                found=true;
            }
        }
        for(unsigned i=0; i<freezer.items.size();i++){
            if(freezer.items.at(i).getName()==input){
                foodNames.push_back(input);
                freezer.removeFood(input);
                    found=true;

            }
        }
        for(unsigned i=0; i<pantry.items.size();i++){
            if(pantry.items.at(i).getName()==input){
                foodNames.push_back(input);
                pantry.removeFood(input);
                found=true;

            }
        }
        if(!found){
            cout<<"you don't have that"<<endl;
        }
    }
    string foodstr;
    for(int i=0; i<foodNames.size();i++){
        // cout<<foodNames.at(i)<<" ";
        foodstr.append(foodNames.at(i));
    }
    cout<<"you prepared an amazing dish of "<<foodstr<<endl;

    cout<<"do you want to put it in the fridge? (yes/no)"<<endl;
    cin>>input;
    if(input=="yes"){
        Food newDish(foodstr,"cooked");
        fridge.addFood(newDish);
    }
}


void printMenu(){
    cout<<"what would you like to do?"<<endl;
    cout<<"c: lets cook something baby"<<endl;
    cout<<"f: eat item from fridge"<<endl;
    cout<<"p: eat item from pantry"<<endl;
    cout<<"s: go to bed and end the day"<<endl;
    cout<<endl;
}

void eatItemFridge(Storage &fridge){
    string input;
    cout<<"What do you want to eat from the fridge?"<<endl;
    cin>>input;
     for(int i=0; i<fridge.items.size();i++){
        if(fridge.items.at(i).getName()==input){
            cout<<"You ate " <<fridge.items.at(i).getName()<<endl;
            fridge.removeFood(fridge.items.at(i).getName());
        }
    }
    cout<<endl;
}

int main(){

    int daysPassed=0;
    Storage freezer("Freezer",8,100);
    Storage pantry("Pantry",20,1);
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
                    break;
                case 's':
                    endOfDay=true;
                    break;
                case 'f':
                    eatItemFridge(fridge);
                    break;
                    
            }   

        pantry.incrementDaysInStorage();
        freezer.incrementDaysInStorage();
        fridge.incrementDaysInStorage();
        daysPassed++;

        freezer.checkSpoiled();
        pantry.checkSpoiled();
        fridge.checkSpoiled();

        pantry.displayItems();
        cout<<endl;
        freezer.displayItems();
        cout<<endl;
        fridge.displayItems();
        cout<<endl;

        
    }
    return 0;
}



