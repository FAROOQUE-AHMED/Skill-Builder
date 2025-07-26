#include <iostream>
using namespace std;
class A{
    int a,b,c;
    public:
    void person(){
        cout<<"Enter 2 numbers"<<endl;
        cin>>a>>b;
        c=a+b;
        cout<<"sum is "<<c<<endl;
    }
    void person(int a,int b){
        c=a*b;
        cout<<"multiplication is "<<c<<endl;
    }

};
int main(){
    A obj;
    obj.person();
    obj.person(10,30);

}