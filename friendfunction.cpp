// Oops friend function demostration in c++
#include<bits/stdc++.h>
using namespace std;

class A{
    private:
       int x,y;
    public:
    void setter(int a,int b){

        this->x=a;
        this->y=b;
    }
    friend int solve(A k){

        return  (k.x+k.y);
    }

    friend int func(A k);
};

int func(A s){

   return (s.x*s.y);
}
int main(){

    A obj;
     obj.setter(5,10);
     int res=solve(obj);
     cout<<res<<"\n";
     cout<<func(obj)<<"\n";

    return 0;

}