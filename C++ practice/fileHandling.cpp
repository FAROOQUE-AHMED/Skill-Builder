#include <iostream>
#include <fstream>

using namespace std;

int main(){


    //file created----------------------------------
    // ofstream newFile("C:\\Users\\Farooque\\OneDrive\\Desktop\\hello.txt");
    // newFile<<"this is the first file i created and so lets begin this journey .....";
    // cout<<"filecreated....";

    //file read-------------------------------------
    string str;
    ifstream newFile("C:\\Users\\Farooque\\OneDrive\\Desktop\\hello.txt");
    while(getline(newFile,str)){
        cout<<str<<endl;
    }
   


    newFile.close();
    return 0;
}