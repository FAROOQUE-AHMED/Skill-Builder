#include<iostream>
using namespace std;

class A{
     private:
     int a=1;
     protected:
     int b=2;
     public:
     int c=3;

};
int main(){
    A obj;
    //cant do because not allowed
    // cout<<obj.a<<endl;
    // cout<<obj.b<<endl;
    cout<<obj.c<<endl;

}