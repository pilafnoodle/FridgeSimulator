#include "food.h"
#include "storage.h"
#include <iostream>

void putNewItemsInStorage(Storage s){
    cout<<"You are putting items inside your "<<s.getName();<<endl;
    string name;
    string category;
    while(!endInput){
        cout<<"enter name of item(q to quit): "<<endl;
        cin>>name;
        if(name="q"){
            break;
        }
        cout<<"enter category (v for vegetables, d for dairy, m for meat, g for grains and p for preserved food)"<<endl;
        cin>>category;
        RawFood newItem(name,category);
        s.addItem(newItem);      
    }
}

void printMenu(){
    cout<<"c: lets cook something baby"<<endl;
    cout<<"l: look at storage"<<endl;
    cout<<"s: go to bed and end the day"<<endl;


}

void putAnythingIntoStorage(){
    string input;
    cout<<"do you want to put anything into storage?"<<endl;

}

int main(){
    int daysPassed=0;

    putAnythingIntoStorage();
    putNewItemsInStorage(Storage s);
    printMenu();
    char input;
    cin>>input;
    switch(input){
        case 'c':
            cookFood();
        case 'l':
            lookAtStorage();
        case 's':
            break;
    }   

}

