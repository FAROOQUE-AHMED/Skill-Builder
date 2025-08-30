#include <iostream>
#include <vector>
using namespace std;

// vector<int> PairSum(vector<int> vec, int target)
// {
//     int n = vec.size();
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (vec[i] + vec[j] == target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
// }

//------------------------------ using optimal appproach ---------------------------

vector<int> pairSum(vector<int> vec, int target)
{
    int i = 0, j = vec.size() - 1;
    vector<int> ans;
    while (i < j)
    {
        if (vec[i] + vec[j] == target)
        {
            // ans[0] = i;
            // ans[1] = j;

            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if (vec[i] + vec[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {1, 5, 6, 8, 9};
    int target = 13;

    vector<int> ans = pairSum(vec, target);
    cout << "answer is " << ans[0] << " and " << ans[1];

    return 0;
}