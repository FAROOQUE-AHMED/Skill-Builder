#include <iostream>

using namespace std;

// its an  easy way but more time consuming

// int main()
// {
//     int num, i, count = 0;

//     cout << "plese enter the number ";
//     cin >> num;
//     for (i = 2; i <= (num - 1); i++)
//     {
//         cout << i << " ";
//         if (num % i == 0)
//         {

//             cout << "not a prime number";
//             count++;
//             break;
//         }
//     }
//     if (count == 0)
//     {
//         cout << "prime number";
//     }
//     return 0;
// }

// -------------------------------------lets begin the best way ------------------------------------

int main()
{
    int i, num, count = 0;
    cout << "PLese enter the number ";
    cin >> num;

    for (i = 2; i * i <= num; i++)
    {
        cout << i << " ";
        if (num % i == 0)
        {
            cout << "Not a prime number";
            count++;
            break;
        }
    }

    if (count == 0)
    {
        cout << "Prime number";
    }
    return 0;
}
