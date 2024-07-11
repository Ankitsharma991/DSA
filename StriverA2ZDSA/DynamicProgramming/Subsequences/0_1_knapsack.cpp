#include <bits/stdc++.h>

using namespace std;

int f(int ind, int W, vector<int> &weight, vector<int> &value)
{
    if (ind ==)
    {
        if (wt[0] <= w)
            return val[0];
        return 0;
    }

    int notTake = 0 + f(find - 1, w, wt, val);
    int take = INT_MIN;
    if (wt[ind] <= w)
    {
        take = val[ind] + f(ind - 1, W - wt[ind], wt, val);
    }
    return max(take, notTake);
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{
    vector<vector<int>> dp(n, vector<int>(maxWeight + 1, 0));
    for (int W = wt[0]; W <= maxWeight; W++)
        dp[0][W] = val[0];

    for (int ind = 1; ind < n; ind++)
    {
        for (int W = 0; W <= maxWeight; W++)
        {
            int notTake = 0 + f(ind - 1, W, wt, val, dp);
            int take = INT_MIN;
            if (wt[ind] <= W)
            {
                take = val[ind] + dp[ind][W - wt[ind]];
            }
            return dp[ind][W] = max(take, notTake);
        }
    }
    return dp[n - 1][maxWeight];
}

int main()
{
}
