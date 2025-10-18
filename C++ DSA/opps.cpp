#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double sal = 25000;

public:
    string name;
    string sub;
    string dept;
    Teacher(string name, string sub, string dept)
    {
        this->name = name;
        this->sub = sub;
        this->dept = dept;
    }

    void setsal(double salery)
    {
        sal = salery;
    }
    double getsal()
    {
        return sal;
    }
    void getinfo()
    {
        cout << name << endl;
        cout << sub << endl;
        cout << getsal() << endl;
        cout << dept << endl;
    }
};

int main()
{
    Teacher T1("FAROOQUE", "ENG", "IOT");
    T1.getinfo();
    cout << T1.name << endl;
    cout << T1.getsal();

    return 0;
}
