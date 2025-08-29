#include <iostream>
#include <vector>
using namespace std;

// int main()
// {

//     vector<int> vect = {1, 2, 3};

//     for (int val : vect)
//     {
//         cout << val << endl;
//     }
//     return 0;
// }

//-----------------------------Question-1 --------------------------------

int main()
{
    int ans = 0;

    vector<int> num = {1, 2, 3, 5, 6, 2, 3, 1, 5};
    for (int val : num)
    {

        ans = ans ^ val;
    }
    cout << ans << endl;

    return 0;
}
