#include <bits/stdc++.h>
using namespace std;
void printSubsets(int idx, vector<int> &arr, int n, vector<int> &ans)
{
    if (idx == n)
    {
        for (auto it : ans)
        {
            cout << it << " ";
        }
        if (ans.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    ans.push_back(arr[idx]);
    printSubsets(idx + 1, arr, n, ans);
    ans.pop_back();
    printSubsets(idx + 1, arr, n, ans);
}

int main()
{
    vector<int> arr = {3, 1, 2};
    int n = 3;
    vector<int> ans = {};
    printSubsets(0, arr, n, ans);
    return 0;
}