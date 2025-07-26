#include <iostream>
using namespace std;
template <class A>
// function template -------------------
// void person(A x,A y){
//     cout<<x<<" "<<y<<endl;

// }

// int main(){
//    person(10,30);
//    person('A','B');
//    person("hello","hiiii");

// }


//class template---------------------------


class B {

    public:
    B(A x,A y){
        cout<<x<<" "<<y<<endl;

    }
};

int main(){
   B <int>  obj(10,230);

}
 