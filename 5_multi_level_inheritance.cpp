#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Product{
    public:
    int amount;
    Product(int amount){
        this->amount= amount;
    }
    void display(){
        cout<<"Products are meant to be stolen"<<endl;
    }

};

class Food: public Product{
    public:
        string type;
        Food(int amount, string type): Product(amount){
            // this->amount= amount;
            this->type= type;
        }
        void eat(){
            cout<<"Food is important"<<endl;
        }
};

class Cake: public Food{
    public:
    string flavor;
    Cake(int amount, string type, string flavour): Food(amount, type){
        this->flavor= flavor;
    }
    void show(){
        cout<<"Yummy"<<endl;
    }
};

int main(){
    Cake blackForest(20, "Dessert", "Chocolate");
    blackForest.eat();
    blackForest.display();
    blackForest.show();

   
return 0;
}