#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the valse of A: ";
    cin >> a;
    cout << "Enter the valse of B: ";
    cin >> b;

    while (a > 0 && b > 0)
    {

        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        cout << "Ans is : " << b;
    }
    else
    {
        cout << "Ans is : " << a;
    }

    return 0;
}