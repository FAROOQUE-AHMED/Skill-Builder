#include<iostream>
using namespace std;
int count=0;
class A{
    public:
    A(){
            cout<<"Constructor created "<<++count<<" times"<<endl;
    }
    ~A(){
            cout<<"Constructor deleted "<<count--<<" times"<<endl;
    }
};

int main(){
    A obj,obj2,obj3;


}
