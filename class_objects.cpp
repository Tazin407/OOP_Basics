#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Food{
    private:
        int cost;
        string type;
    public:
        Food(int cost, string type){
            this->cost= cost;
            this->type=type;
        }
        void display(){
            cout<<type<< " type of food costs "<<cost<<" BDT "<<endl;
        }

};

int main(){

    Food cake(20, "dessert");
    cake.display();

   
return 0;
}