#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Program started successfully"<<endl;
    cout<<"enter the 2 numbers : "<<endl;
    cin>>a>>b;
    try
    {
        if(b==0)
        throw b;
        c=a/b;
        cout<<c<<endl;
    }
    catch(int x)
    {
        cout<<a<<" cannot be divided with "<<b<<endl;
    }
    
   
    cout<<"Program ended successfully";
}