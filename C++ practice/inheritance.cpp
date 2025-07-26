#include <iostream>
using namespace std;
class father{
    protected:
    int property;

    public:
    void foutput(){
        property=10000000;
       
    }

};

class Son:public father
{

    protected:
    int money;
    public:
    void soutput(){
        money=10000;
    }

};
class GrandSon:public Son
{

    int Pocketmoney;
    public:
    void goutput(){
        Pocketmoney=1000;
        cout<<property<<endl<<money<<endl<<Pocketmoney<<endl;
        cout<<property+money+Pocketmoney;
    }

};


int main(){
    GrandSon obj;
    obj.foutput();
    obj.soutput();
    obj.goutput();
  
   
}