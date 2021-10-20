
/*  ********************Virtual Function Demostration******************************************************************
->  virtual function use to modify the default behavior of class based function 
-> It used in inheritence.
->It used to achieve run time polymorphism
-> the virtual function is nothing but  virtual keyword use with normal function
e.g
 let us take an example below we have made a base class and derived class which have same function
 we want to acess derived class function therefore  we have create a base class pointer pointing to derived class 
 and when we trying to acess the function  in derived class we failed to acess the
 member of derived class .the pointer accessing the data from base class therefore we  using virtual keyword in our function
 to acess the function of derived class.

 Condition to make virtual function
1)A base class and a derived class. 
2) A function with the same name in a base class and derived class. 
3) A pointer or reference of base class type pointing or referring to an object of a derived class.


*/
#include<bits/stdc++.h>
using namespace std;

 class BaseClass
 {
  
 public:
         int var_base=1;

          virtual  void display(){

             cout<<"This is  Base class\n";
         }
 };

 class DerivedClass: public BaseClass{


     public:
          int var_derived=2;

          void display(){

              cout<<"this is derived class \n";
          }
 };

 int main(){

     BaseClass obj_1;
     DerivedClass obj_2;
     BaseClass *base_pointer;
     base_pointer=&obj_2;

    //  obj_2.display();  
    //  obj_1.display();

    base_pointer->display();
    // cout<<base_pointer->var_base;
 }
 

 