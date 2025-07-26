#include <iostream>
using namespace std;
class thief{
    private:
    int pin;
    int balance;
    string bankName;
    int IFSC;
    int AccountNo;

    public:
    void input(){
    pin=1234;
    balance=123456789;
    bankName="hello bank";
    IFSC=987654321;
    AccountNo=528467391;
    }

    public:
    void output(){
        cout<<bankName<<endl;
        cout<<balance<<endl;
        cout<<pin<<endl;
        cout<<IFSC<<endl;
        cout<<AccountNo<<endl;
    }

};

class Police:public thief
{

};

int main(){
    thief obj;
    Police obj2;
    obj2.input();
    obj2.output();
   
}