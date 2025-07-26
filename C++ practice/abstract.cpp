#include <iostream>
using namespace std;
class animal{

    public:
    virtual void sound()=0;
    void beh(){
        cout<<"eating"<<endl;
    }

};

class Dog:public animal
{
    public:
    void sound(){
        cout<<"barking"<<endl;
    }

};


int main(){
    Dog obj;
    obj.sound();
    obj.beh();

}