#include <iostream>
using namespace std;
int main(){
    int size,i,j,a[size];
    cout<<"Enter the size of array: ";
    cin>>size;

    for(j=0;j<size;j++){
        cout<<"Enter the element "<<j+1<<" of array: ";
        cin>>a[j];
    }
    cout<<"The elements are: ";
    for(i=0;i<size;i++){
        cout<<a[i]<<ends;
    }
    return 0;
}