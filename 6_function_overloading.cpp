// This is the example of polymorphism in C++

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Sum{
    public:
        int add(int a, int b){
            return a+b;
        }

        int add(int a, int b, int d, char c){
            cout<<c<<" " ;
            return a+b+d;
        }

};

int main(){

    Sum a;
    cout<<a.add(2,3)<<endl;
    cout<<a.add(45,33,23,'A');
    


   
return 0;
}