#include <bits/stdc++.h>
using namespace std;

void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    if (ind == arr.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }

    // pick up the element
    if (arr[ind] <= target)
    {
        ds.push_back(arr[ind]);
        findCombination(ind, target - arr[ind], arr, ans, ds);
        ds.pop_back();
    }
    findCombination(ind + 1, target, arr, ans, ds);
}

int main()
{
    vector<vector<int>> ans;
    vector<int> ds;
    int target = 7;
    vector<int> candidates = {2, 3, 6, 7};
    findCombination(0, target, candidates, ans, ds);

    for (auto it : ans)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}