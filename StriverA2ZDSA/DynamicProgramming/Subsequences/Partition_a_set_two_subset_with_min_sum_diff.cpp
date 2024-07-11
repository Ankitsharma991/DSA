#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> &arr, int n)
{
    int totSum = 0;
    for (int i = 0; i < n; i++)
        totSum += arr[i];

    int k = totSum;
    vector<vector<bool>> dp(n, vector<bool>(k + 1, 0));
    for (int i = 0; i < n; i++)
        dp[i][0] = true;

    if (arr[0] <= k)
        dp[0][arr[0]] = true;
    for (int ind = 1; ind < n; ind++)
    {
        for (int target = 1; target <= k; target++)
        {
            bool notTake = dp[ind - 1][target];
            bool take = false;
            if (arr[ind] <= target)
                take = dp[ind - 1][target - arr[ind]];
            dp[ind][target] = take | notTake;
        }
    }

    int mini = 1e9;
    for (int a1 = 0; a1 <= totSum / 2; a1++)
    {
        if (dp[n - 1][a1] == true)
        {
            mini = min(mini, abs((totSum - a1) - a1));
        }
    }
    return mini;
}

int main()
{
}