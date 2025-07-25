#include <iostream>

// #define num 17

// using namespace std;
// int main(){
//     int i ;

//     for(i=1;i<=10;i++){

//          cout<<num<<"*"<<i<<"="<<i*num<<endl;

//     }
   

// }

#define num(a,b) ((a>b)?a:b) 

using namespace std;
int main(){
    cout<<num(100,200)<<endl;
    cout<<num(10131230,255500)<<endl;
    cout<<num(1464,2200)<<endl;
    cout<<num(1,20)<<endl;
    cout<<num(1022121,22122500)<<endl;
    cout<<num(1212100,20440)<<endl;
    cout<<num(10450,2050);
}