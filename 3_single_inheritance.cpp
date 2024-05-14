//                      Public Derivation    Private Derivation     Protected Derivation

// Public Member            Public             Private             Protected  

// Private Member          Not inherited      Not Inherited       Not inherited

// Protected Member        Protected           Private               Protected


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

class Dog: public Animal{
    public:
    Dog(int legs, string type): Animal(legs, type){

    }
};

int main(){
    Dog husky(4, "Carnivore");
    husky.display("husky");

   
return 0;
}