#include <iostream>
using namespace std;

// class A{
//     int a,b;
//     public:
//     //Default constructor-----
//     A(){
//         a=10;
//         b=20;
//         cout<<a<<" "<<b;        
//     }
// };
// int main(){
//  // A obj;
//     //  OR
//     A obj=A();

// }
//-------------------------------------------------

// class A{
//     int a,b;
//     public:
//     //Parameterized constructor --------
//     A(int a , int b){
//         cout<<a<<" "<<b;        
//     }
// };
// int main(){
//     // A obj(100,200);
//     //   OR
//     A obj=A(100,500);
//     return 0;

// }
// --------------------------------------------------------


class A{
    int a,b,x,y,p,q;
    public:
    //Copy constructor --------
    A(int a , int b){
        x=a;
        y=b;
        cout<<x<<" "<<y<<endl;        
    }

    A(A&ref){
        p=ref.x;
        q=ref.y;
        cout<<p<<" "<<q;  
    }


};
int main(){
    A obj(100,200);
    A obj2=obj;

    return 0;

}