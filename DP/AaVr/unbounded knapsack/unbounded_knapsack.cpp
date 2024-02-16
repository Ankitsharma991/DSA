#include <bits/stdc++.h>
using namespace std;

int maxNum(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    return b;
}

int unbounded_knapsack(vector<int> &wt, vector<int> &val, int w, int n, vector<vector<int>> &dp)
{
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < w + 1; j++)
        {
            if (wt[i - 1] <= j)
            {
                dp[i][j] = max((val[i - 1] + dp[i][j - wt[i - 1]]), dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][w];
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> v = {2, 4, 5, 6, 7};
    int w = 5;

    // Initialize dp with 0 values
    vector<vector<int>> dp(a.size() + 1, vector<int>(w + 1, 0));

    for (int i = 0; i < a.size() + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }

    cout << unbounded_knapsack(a, v, w, a.size(), dp) << endl;

    return 0;
}
