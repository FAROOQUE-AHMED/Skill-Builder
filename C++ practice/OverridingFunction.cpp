#include <iostream>
using namespace std;
class father{
    protected:
    int property;

    public:
    void foutput(){
        property=20000000;
        cout<<property<<endl;
       
    }

};

class Son:public father
{

    protected:
    int money;
    public:
    void foutput(){
        money=10000;
        cout<<money<<endl;
    }

};


int main(){
    Son obj;
    obj.foutput();
    obj.father::foutput();

}