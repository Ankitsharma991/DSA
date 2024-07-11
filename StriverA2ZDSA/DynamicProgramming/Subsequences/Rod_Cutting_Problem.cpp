#include <bits/stdc++.h>
using namespace std;

int f(int ind, int N, vector<int> &prices, vector<vector<int>> &dp)
{
    if (ind == 0)
        return N * prices[0];
    if (dp[ind][N] != -1)
        return dp[ind][N];
    int notTake = 0 + f(ind - 1, N, prices, dp);
    int take = INT_MIN;
    int rodLength = ind + 1;
    if (rodLength <= N)
        take = price[ind] + f(ind, N - rodLength, price, dp);
    return dp[ind][N] = max(take, notTake);
}

int cutRod(vector<int> &prices, int N)
{
    int n = prices.size();
    vector<vector<int>> dp(n, vector<int>(N + 1 - 1));

    return f(n - 1, N, prices, dp)
}

int main() {}