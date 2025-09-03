#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// -----------------------------------------brute force approach----------------------------------------------

// int majority(vector<int> maj)
// {
//     int size = maj.size();
//     for (int i : maj)
//     {
//         int count = 0;
//         for (int j : maj)
//         {
//             if (i == j)
//             {
//                 count++;
//             }
//         }
//         if (count > size / 2)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> vec = {1, 3, 3, 2, 3, 3, 1, 5, 6, 8, 3, 3, 3, 3};
//     int ans = majority(vec);
//     cout << "answer is " << ans;
// }

//----------------------------------------------optimal approach------------------------------------------

// int majority(vector<int> maj)
// {
//     int size = maj.size();

//     sort(maj.begin(), maj.end());
//     int count = 1;
//     if (size == 1) return maj[0];

//     for (int i = 0; i < size - 1; i++)
//     {
//         if (maj[i] == maj[i + 1])
//         {
//             count++;
//             if (count > size / 2)
//             {
//                 return maj[i];
//             }
//         }
//         else
//         {
//             count = 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> vec = {1, 3, 3, 2, 3, 3, 1, 5, 6, 8, 3, 3, 3};
//     int ans = majority(vec);
//     cout << "answer is " << ans;
// }

// ---------------------------moore's voting -----------------------

int majority(vector<int> vec)
{
    int size = vec.size();
    int freq = 0, ans = 0;
    for (int i = 0; i < size; i++)
    {
        if (freq == 0)
        {
            ans = vec[i];
        }
        if (vec[i] == ans)
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{

    vector<int> vec = {1, 2, 3, 2, 3, 3, 1, 5, 6, 8, 3, 3, 3};
    int ans = majority(vec);
    cout << "answer is " << ans;
}