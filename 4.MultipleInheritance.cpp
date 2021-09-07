/*Multiple inheritance is a feature of c++ where a class can inherit from
more than one classes  */


#include <iostream>
using namespace std;
 
// first base class
class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
// second base class
class FourWheeler {
  public:
    FourWheeler()
    {
      cout << "This is a 4 wheeler Vehicle" << endl;
    }
};
 
// sub class derived from two base classes
class Car: public Vehicle, public FourWheeler {
 
};
 
// main function
int main()
{  
    // creating object of sub class will
    // invoke the constructor of base classes
    Car obj;
    return 0;
}