#include <iostream>
using namespace std;
class A{
    private:
    int pin;
    int balance;
    public:
    string bankName;
    int IFSC;
    int AccountNo;


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