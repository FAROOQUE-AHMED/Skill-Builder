#include <iostream>
using namespace std;

// ---------------------Question-1-------------------------
// A
// BA
// CBA
// DCBA

// int main()
// {
//     int i, j, num;
//     char alp;
//     num = 5;
//     for (i = 0; i < num; i++)
//     {
//         alp = 'A';
//         for (j = 0; j <= i; j++)
//         {

//             cout << (char)(alp + i) << " ";
//             alp--;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// ---------------------Question-2-------------------------
// 1111
//  222
//   33
//    4

// int main()
// {
//     int i, j, num;
//     cout << "Enter the number: ";
//     cin >> num;

//         for (i = 0; i < num; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout << " ";
//         }
//         for (j = num; j > i; j--)
//         {
//             cout << i + 1;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// ---------------------Question-3-------------------------
//   1
//  121
// 12321
// 1234321

// int main()
// {
//     int i, j, num;
//     cout << "Enter the number: ";
//     cin >> num;

//     for (i = 0; i < num; i++)
//     {
//         for (j = num; j > i + 1; j--)
//         {
//             cout << " ";
//         }

//         for (j = 0; j <= i; j++)
//         {
//             cout << j + 1;
//         }
//         for (j = i; j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// ---------------------Question-4-------------------------
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

int main()
{
    int i, j, num, space;
    num = 4;
    space = (num * 2) - 2;

    for (i = 0; i < num; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }

        for (j = 0; j < space; j++)
        {
            cout << " ";
        }
        space = space - 2;

        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    space = 0;

    for (i = 0; i < num; i++)
    {
        for (j = num; j > i; j--)
        {
            cout << "*";
        }

        for (j = 0; j < space; j++)
        {
            cout << " ";
        }
        space = space + 2;

        for (j = num; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
