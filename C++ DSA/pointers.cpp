#include <iostream>
using namespace std;
// int changeA(int *pr)
// {
//     *pr = 20;
// }

// int main()
// {
//     int a = 10;
//     // int *b = &a;
//     // int **c = &b;
//     // cout << a << endl;
//     // cout << b << endl;
//     // cout << c << endl;
//     // cout << *b << endl;
//     // cout << b << endl;
//     // cout << **c << endl;
//     // cout << *&c;
//     cout << a << endl;
//     cout << &a << endl;
//     changeA(&a);
//     cout << a << endl;
//     return 0;
// }

int main()
{
    int a = 10, b = 20;
    int *pr = &a;
    *pr = b;

    cout << a << endl;
}