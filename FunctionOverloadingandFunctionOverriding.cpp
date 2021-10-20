#include<bits/stdc++.h>
using namespace std;

// *************** Function Overloading************************

/* ->function overloading: it provide  multiple definition by changing
    signature parameters and change return type 
->    It achieved at complie time*/
        int func(int a){

            return a;
      }

       string func(string s){
              return s;
       }

       void func(float a,float b){

           cout<<a+b<<"\n";
       }


//  ************function overriding*************************

/* It is the redefinition of base class function in its derived class
with same signature and return type and parameters
-> It achieved at run time */

class BaseClass
{
public:
    virtual void Display()
    {
        cout << "\nThis is Display() method"
                " of BaseClass";
    }
    void Show()
    {
        cout << "\nThis is Show() method "
               "of BaseClass";
    }
};
 
class DerivedClass : public BaseClass
{
public:
    // Overriding method - new working of
    // base class's display method
    void Display()
    {
        cout << "\nThis is Display() method"
               " of DerivedClass";
    }
};

int main(){

 

    // cout<< func(2)<<"\n";
    // cout<< func("himanshu")<<"\n";
    //  func(5.4,5.3);


     DerivedClass dr;
     BaseClass &bs=dr;
     bs.Display();

    return 0;
}