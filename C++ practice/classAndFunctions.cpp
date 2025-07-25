#include <iostream>
using namespace std;
class Print{
    public:
    void show(){
        cout<<"Welcome to the coding era"<<endl;
    }
};

class Person{
    private:
    int runned;
    string msg;
    public:
    void run(){
        runned=5;
        cout<<"Today i runned for "<<runned<<" kilometers"<<endl;
    }
    void walk(){
        msg="Today i walked for 5 kilometers";
        cout<<msg<<endl;
    }
    void sleep(){
        cout<<"Today i slept for 5 hours only"<<endl;
    }
};

int main(){
    Print obj;
    Person task;
    task.run();
    task.sleep();
    task.walk();
    obj.show();


}