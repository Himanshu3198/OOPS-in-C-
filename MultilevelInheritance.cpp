/* Multilevel Inheritance: In this type of inheritance, 
a derived class is created from another derived class. */
#include<bits/stdc++.h>
using namespace std;

class Vehicle{

    public:
    Vehicle(){
        cout<<"this is vehicle\n";
    }
};

class FourWheeler:public Vehicle{

    public:
    FourWheeler(){
        cout<<"this is fourwheeler\n";
    }
};

class Car:public FourWheeler{

    public:
    Car(){
        cout<<"Car has 4 Wheels\n";
    }
};

int main(){

    Car obj;
    return 0;
}