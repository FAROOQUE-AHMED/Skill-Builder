#include <iostream>
using namespace std;
//-------------question 1 ----------------
// int minimum(int a, int b)
// {
//     if (a < b)
//     {
//         return a;
//     }
//     else
//         return b;
// }

// int main()
// {
//     int min, num1, num2;

//     cout << "Enter the 1st number: ";
//     cin >> num1;
//     cout << "Enter the 2nd number: ";
//     cin >> num2;

//     min = minimum(num1, num2);
//     cout << "minimum is: " << min;

//     return 0;
// }

//--------------question-2------------------------

// int sum(int num)
// {
//     int sum = 0, div;
//     while (num > 0)
//     {
//         div = num % 10;
//         sum += div;
//         num = num / 10;
//     }
//     return sum;
// }
// int main()
// {
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;
//     cout << "sum is:" << sum(num) << endl;
//     return 0;
// }

//--------------question-3 Calculate nCr ------------------------
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int bionomialOf(int n, int r)
{
    int bio;
    bio = factorial(n) / (factorial(r) * factorial(n - r));
    return bio;
}

int main()
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    cout << bionomialOf(n, r);
    return 0;
}