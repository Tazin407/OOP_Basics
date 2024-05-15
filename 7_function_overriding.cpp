// This is related to inheritance

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Food
{
    int cost;
    string type;

    public:
    Food(int cost, string type)
    {
        this->cost= cost;
        this->type= type;
    }

    void display(){
        cout<<type<<" type of food costs "<<cost<<" BDT"<<endl;
    }
};

class Fruit: public Food{
    public:
        Fruit(int cost, string type): Food(cost, type){

        }
        void display(){
            cout<<"This is overriden function"<<endl;
            Food::display();
        }
};

int main()
{
    Food cake(30, "Dessert");
    Fruit apple(33, "Healthy");
    cake.display();
    apple.display();
    


    return 0;
}