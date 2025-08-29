#include <iostream>
using namespace std;

int DecToBin(int dec)
{
    int rem, ans = 0, pow = 1;
    while (dec > 0)
    {
        rem = dec % 2;
        dec = dec / 2;
        ans = ans + (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int BinToDec(int bin)
{
    int rem, ans = 0, pow = 1;
    while (bin > 0)
    {
        rem = bin % 10;
        bin = bin / 10;
        ans = ans + (rem * pow);
        pow = pow * 2;
    }
    return ans;
}

int main()
{

    cout << DecToBin(4) << endl;
    cout << BinToDec(1000);

    return 0;
}