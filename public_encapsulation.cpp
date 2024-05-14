#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int legs;
    string type;

    Animal(int legs, string type){
        this->legs=legs;
        this->type= type;
    }

    void display(string name){
        cout<<name<<" animal has "<<legs<<" legs and is a "<<type<<" type"<<endl;
    }

};

int main(){

    Animal cow= Animal(4,"herbivore");
    cow.display("cow");

   
return 0;
}