#include<bits/stdc++.h>
#define E "\n"
using namespace std;

class student{

    string hobby;
    public:
     string name;
     int age;
     string gender;

         // fefault constructor
      student(){
             cout<<"this is defalut constructor\n";
         }
              // constructor  user defined
      student(string s,int a,string gen,string hobby){
          name=s;
          age=a;
          gender=gen;
          hobby=hobby;
      }

      student(student &a){

          cout<<"Copy constructor is called\n";
          name=a.name;
          age=a.age;
          gender=a.gender;
          hobby=a.hobby;
      }

     void sethobby(string s){
         hobby=s;
     }
     void gethobby(){
         cout<<hobby<<"\n";
     }

     void display(){

       cout<<" "<<name<<" "<<age<<" "<<gender<<" "<<hobby<<"\n"; 
     }
     ~student(){
         cout<<"destructor is called\n";
     }


};

int main(){
    // passing parameters to constructor
    student  x("himanshu",22,"male","cpiest"),y("raju",5,"female","gaming"),z,z1;
    student copy=x;
     
     x.display();
     y.display();
     copy.display();
    

    // for(int i=0;i<3;i++){

    //     cin>>arr[i].name;
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    //     string s;
    //     cin>>s;
        
    //     arr[i].sethobby(s);

    // }
    // arr[0].sethobby("bakchodi karna");
    // arr[0].gethobby();


    // for(int i=0;i<3;i++){

    //      arr[i].display();
    // }



    return 0;
}