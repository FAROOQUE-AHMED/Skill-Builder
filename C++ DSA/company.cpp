#include <iostream>
#include <vector>
using namespace std;
/*--------------------------------------------------------------
int main()
{
    vector<int> arr = {1, 7, 6, 9, 6, 5, 0, 12};
    const int N = 1e4 + 2;
    vector<int> neg(N, -1);
    int minInt = N;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (neg[arr[i]] != -1)
        {
            minInt = min(minInt, neg[arr[i]]);
        }
        else
        {
            neg[arr[i]] = i;
        }
    }
    if (minInt == 1e4 + 2)
    {
        cout << -1;
    }
    else
    {
        cout << arr[minInt];
    }
}
    -----------------------------------------------------------------------------------------*/

int main()
{
    vector<int> arr = {3, 3, 2, 5, 8, 2, 9, 7, 5, 6, 1};
    int tar = 160;
    int start = 0;
    int end = 0;
    int sum = 0;
    for (int end = 0; end < arr.size(); end++)
    {
        sum += arr[end];
        while (sum > tar && start <= end)
        {
            sum = sum - arr[start];
            start++;
        }
        if (sum == tar)
        {
            cout << "the required array is : [ ";
            for (int i = start; i <= end; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "]";
            return 0;
        }
    }
    cout << "No such target found";
    return 0;
}
// ---------------------------------------------------------------------