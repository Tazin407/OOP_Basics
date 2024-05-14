#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Food{
    public:
    int cost;
    string type;
    Food(int cost, string type){
        this->cost=cost;
        this->type= type;
    }
    void display(){
        cout<<"Food is necessary"<<endl;
    }

};

class Product{
    public:
    // int amount;
    // string type;
    // Product(int amount, string type){
    //     this->amount=amount;
    //     this->type= type;
    // }

    void show(){
        cout<<"Products are to be sold"<<endl;
    }

};

class Dessert: public Food, public Product{
    public:
    Dessert(int cost, string type): Food(cost, type){

    }
};

int main(){
    Dessert cake(20, "Sweet");
    cake.display();
    cake.show();
   
return 0;
}