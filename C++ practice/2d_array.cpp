#include <iostream>
using namespace std;
int  main(){
    int i,j,x=0,y=0;
    cout<<"Enter the numbers of rows :";
    cin>>x;
    cout<<"Enter the numbers of coloums :";
    cin>>y;
    int arr[x][y];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            cin>>arr[i][j];

        }

    }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;

    }
    return 0;
}