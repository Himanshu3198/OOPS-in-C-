
/*  Encapsulation: is the mechanism that binds together the data and 
functions  that manipulate the data and keeps both safe from outside 
interference and misuse
   note:-  scope of data 
         data type       inside the class  inherited class   outside the class
         
         public              yes               yes                yes
         private             yes                No                 No
         protected           yes                yes                No       
        
        
        
*/
            

#include<bits/stdc++.h>
using namespace std;

class student{

    public: 
     void func1(){
        cout<<"this is public data\n";
     }

    private:
     void func2(){
         cout<<"this is private data\n";
     }

    protected:
    void func3(){

        cout<<"this is protected data\n";
    } 

};

int main(){

     student obj;

    obj.func1();
    // obj.func2();
    // obj.func3();

    return 0;
}