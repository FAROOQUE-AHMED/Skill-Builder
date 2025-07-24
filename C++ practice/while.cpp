#include <iostream>

using namespace std;
int main(){
    int a,count=0;
    string statement;
    cout<<"Enter the number :";
    cin>>a;
    while(a>0){
        a=a/10;
        count++;
    }
    statement =(count>1)? "The number of digits are :":"The number of digit is :";
    cout<<statement<<count;
    return 0;
}