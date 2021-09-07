/*
 Inheritance: The capability of a class to derive properties and characteristics from 
 another class is called Inheritance. 

 Sub Class: The class that inherits properties from another class is called Sub 
 class or Derived Class. 

 Super Class:The class whose properties are inherited by sub class is called Base
 Class or Super class. 


  Types of Inheritance:
  1.single Inheritance
  2.multiple Inheritance
  3.multilevel Inheritance
  4.Hierarchical Inheritance
  5. hybrid Inheritance
  6.type of hybrid Inheritance Multipath Inheritance






 
 */

#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
     int id;
     string name;

    //  Parent(int i,string n){
    //      i=id;
    //      name=n;
    //  }
     void display(){
         cout<<id<<" "<<name<<"\n";
     }
};

class Child:public Parent{
        public:
        string branch;

        void print(){

            cout<<id<<" "<<name<<" "<<branch<<"\n";
        }


};

int main(){

    //  Parent obj(455,"himanshu");

    //  obj.id=455;
    //  obj.name="himanshu";
    //  obj.display();
      Child obj1;
       obj1.id=455;
       obj1.name="himanshu";
       obj1.branch="ECE";
       obj1.print();
    



    return 0;
}