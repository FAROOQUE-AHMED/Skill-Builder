#include <iostream>
using namespace std;
namespace A{

    int a;
    void printed(){
        a=10;
        cout<<a<<endl;
    }

};

namespace B{

    int a;
    void printed(){
        a=20;
        cout<<a<<endl;
    }

};


int main(){
    A::printed();
    B::printed();

}