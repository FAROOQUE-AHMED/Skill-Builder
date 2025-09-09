#include <iostream>
#include <vector>
using namespace std;

//----------------------------question-1 ( all possible sub arrays)---------------------------

// int main()
// {
//     int vec[5] = {6, 5, 8, 2, 9};

//     for (int st = 0; st < 5; st++)
//     {
//         for (int end = st; end < 5; end++)
//         {
//             cout << "[ ";
//             for (int i = st; i <= end; i++)
//             {
//                 cout << vec[i];
//             }
//             cout << " ]";
//         }
//         cout << endl;
//     }
// }

//--------------------question -2 max sub array---------------------------
// int main()
// {
//     int vec[7] = {3, -4, 5, 4, -1, 7, -8};
//     int maxSum = 0;
//     for (int st = 0; st < 7; st++)
//     {
//         int curSum = 0;
//         for (int end = st; end < 7; end++)
//         {
//             curSum = curSum + vec[end];
//             maxSum = max(maxSum, curSum);
//         }
//     }
//     cout << maxSum;
// }

//--------------------USING KADANE'S ALGORITHM ( max sub array)---------------------------
int main()
{
    vector<int> vec = {-3, -41, 5, -4, -1, -6, -8};
    int maxSum = INT_MIN, curSum = 0;
    for (int st : vec)
    {
        curSum = curSum + st;
        maxSum = max(maxSum, curSum);
        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    cout << maxSum;
}