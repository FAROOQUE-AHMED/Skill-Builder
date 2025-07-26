#include <iostream>
using namespace std;
class A{
    private:
    int pin=1234;
    int balance=123456789;
    public:
    string bankName="hello bank";
    int IFSC=987654321;
    int AccountNo=528467391;


    void input(){
    pin=1234;
    balance=123456789;
    bankName="hello bank";
    IFSC=987654321;
    AccountNo=528467391;
    }

    void output(){
        cout<<bankName<<endl;
        cout<<balance<<endl;
        cout<<pin<<endl;
        cout<<IFSC<<endl;
        cout<<AccountNo<<endl;
    }

};
int main(){
    A obj;
    obj.input();
    obj.output();
    cout<<"aryan is trying to acces my account details..."<<endl;
    cout<<obj.bankName<<endl;
    // cout<<obj.balance<<endl;
    // cout<<obj.pin<<endl;
    cout<<obj.IFSC<<endl;
    cout<<obj.AccountNo<<endl;

}