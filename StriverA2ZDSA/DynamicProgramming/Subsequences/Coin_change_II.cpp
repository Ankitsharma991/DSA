#include <bits/stdc++.h>

using namespace std;

long f(int ind, int T, vector<int> &a, vector<vector<int>> &dp)
{
    if (ind == 0)
        return (T % a[0] == 0);

    if (dp[n][T] != -1)
        return dp[ind][T];
    long nonTake = f(ind - 1, T, a, dp);
    long take = 0;
    if (a[ind] <= T)
        take = f(ind, T - a[ind], a, dp);
    return dp[ind][T] = take + nonTake;
}

long countWaysToMakeChange(vector<int> &denominations, int n, int value)
{
    vector<vector<int>> dp(n, vector<int>(value + 1, -1));
    return f(n - 1, value, denominations, dp);
}

int main()
{
    return 0;
}