#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,pin;
    cout<<"enter atm pin\n";
    cin>>a>>b>>c>>d;

    pin=a*1000+b*100+c*10+d;

    if(pin==1234){
        cout<<"right pin and your pin is "<<pin;
    }else{
        cout<<"wrong pin and you entered "<<pin;
    }
    return 0;


}