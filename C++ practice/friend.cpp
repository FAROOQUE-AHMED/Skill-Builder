#include <iostream>
using namespace std;
// class Farooque{
//     private:
//     string tv , game;
//     public:
//     void show(){
//         tv="ipl match";
//     }
//     void play(){
//         game="playing";
//     }
//     friend void aryan(Farooque sit);
// };
// void aryan(Farooque a){
//     cout<<"he is "<<a.game<<endl;
//     cout<<"watching "<<a.tv;
// }
// int main(){
//     Farooque a;
//     a.show();
//     a.play();
//     aryan(a);
//     return 0;
// }

//-----------------------Another with 2 friends----------------------------------
class Ahmed;//to innitlize the class
class Farooque{
    private:
    int a,d;
    public:
    void ihave(){
        a=10;
    }
    void ihavemay(){
        d=40;
    }
    friend void aryan(Farooque p, Ahmed q);
};
class Ahmed{
    private:
    int b;
    public:
    void ialsohave(){
        b=20;
    }
    friend void aryan(Farooque p,Ahmed q);
};
void aryan(Farooque p,Ahmed q){
    int c;
    c=p.a+q.b+p.d;
    cout<<c;
}
int main(){
    Farooque obja;
    Ahmed obja2;
    obja.ihave();
    obja.ihavemay();
    obja2.ialsohave();
    aryan(obja,obja2);
    return 0;
}