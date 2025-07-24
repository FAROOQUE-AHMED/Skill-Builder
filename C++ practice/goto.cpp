#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age :";
    cin>>age;

    if(age>=18)
    goto Vote;
    else
    goto notVote;
    

    Vote: 
        cout<<"Congratulations you are eligible to vote";
                return 0;

    notVote: 
        cout<<"oppsssssssss better luck after a year";
                return 0;

}
