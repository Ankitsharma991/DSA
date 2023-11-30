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

int main()
{
    int n = 8;
    vector<int> heights = {7, 4, 4, 2, 6, 6, 3, 4};
    vector<int> dp(n + 1, -1);
    cout << f(n - 1, heights, dp) << endl;

    return 0;
}