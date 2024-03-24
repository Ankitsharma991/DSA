#include <bits/stdc++.h>
using namespace std;

void findCombinationSum3(int idx, vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds, int k, int n)
{
    if (idx == 9)
    {
        if (n == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    if (nums[idx] <= n)
    {
        ds.push_back(nums[idx]);
        findCombinationSum3(idx + 1, nums, ans, ds, k, n);
        ds.pop_back();
    }
    findCombinationSum3(idx + 1, nums, ans, ds, k, n);
}

// vector<vector<int>> combinationSum3(int k, int n)
// {
// }

void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }

    for (int i = ind; i < arr.size(); i++)
    {
        if (i > ind && arr[i] == arr[i - 1])
            continue;
        if (arr[i] > target)
            break;
        ds.push_back(arr[i]);
        findCombinations(i + 1, target - arr[i], arr, ans, ds);
        ds.pop_back();
    }
}

int main()
{
    // vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // vector<vector<int>> ans;
    // vector<int> ds;
    // int k = 3;
    // int n = 7;
    // findCombinationSum3(0, nums, ans, ds, k, n);
    // return ans;
    // for (auto it : ans)
    // {
    //     for (auto i : it)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    vector<int> candidates = {};
    int target = 7;
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;

    findCombination(0, target, candidates, ans, ds);
    return ans;
    return 0;
}