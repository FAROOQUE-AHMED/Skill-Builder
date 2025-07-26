#include<iostream>
using namespace std;
class A{
    private:
    int a,b;
    public:
    void intro(){
        a=10;
        b=30;

    }
    friend class B;
   
};
class B {
    public:
    void add(A obj){
    int c;
    c=obj.a+obj.b;
    cout<<"the sum is "<<c;
    }
    

};
int main(){
    A obj;
    obj.intro();
    B obj2;
    obj2.add(obj);




}