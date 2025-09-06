#include <iostream>
#include <vector>
using namespace std;
int bin(vector<int> vec, int tar, int st, int end)
{
    if (st > end)
    {
        return -1;
    }
    // while (st <= end)
    // {
    int mid = st + (end - st) / 2;
    if (tar < vec[mid])
    {
        return bin(vec, tar, st, mid - 1);
        // end = mid - 1;
    }
    else if (tar > vec[mid])
    {
        return bin(vec, tar, mid + 1, end);
        // st = mid + 1;
    }
    else
    {
        return mid;
    }
    // }
    return -1;
}
int main()
{

    vector<int> vec = {1, 3, 5, 6, 8};
    int tar = 5;
    int ans = bin(vec, tar, 0, vec.size() - 1);
    cout << ans << endl;

    return 0;
}