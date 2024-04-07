#include <bits/stdc++.h>
using namespace std;

int f(int ind, vector<int> &heights, vector<int> &dp)
{
    if (ind == 0)
        return 0;

    int left = f(ind - 1, heights, dp) + abs(heights[ind] - heights[ind - 1]);
    int right = INT_MAX;
    if (ind > 1)
        right = f(ind - 2, heights, dp) + abs(heights[ind] - heights[ind - 2]);
    return dp[ind] = min(left, right);
}

// Second approach
int func(int ind, vector<int> &heights, vector<int> &dp)
{
    if (ind == 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int left = func(ind - 1, heights, dp) + abs(heights[ind] - heights[ind - 1]);
    int right = INT_MAX;
    if (ind > 1)
        right = func(ind - 2, heights, dp) + abs(heights[ind] + heights[ind - 2]);
    return dp[ind] = min(left, right);
}

// most space and time optimized

int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n, 0);
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        int fs = dp[i - 1] + abs(heights[i] - heights[i - 1]);
        int ss = INT_MAX;
        if (i > 1)
            ss = dp[i - 2] + abs(heights[i] - heights[i - 2]);
        dp[i] = min(ss, fs);
    }
    return dp[n - 1];
}

// Space optimized code
int frogJump2(int n, vector<int> &heights)
{
    int prev = 0, prev2 = 0;
    for (int i = 0; i < n; i++)
    {
        int fs = prev + abs(heights[i] - heights[i - 1]);
        int ss = INT_MAX;
        if (i > 1)
            ss = prev2 + abs(heights[i] - heights[i - 2]);
        int currentInd = min(ss, fs);
        prev2 = prev;
        prev = currentInd;
    }
    return prev;
}

int main()
{
    int n = 8;
    vector<int> heights = {7, 4, 4, 2, 6, 6, 3, 4};
    vector<int> dp(n + 1, -1);
    cout << f(n, heights, dp) << endl;
    cout << frogJump(n, heights) << endl;
    cout << frogJump2(n, heights) << endl;

    return 0;
}