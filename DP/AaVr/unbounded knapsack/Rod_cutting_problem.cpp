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

int unbounded_knapsack(vector<int> &len, vector<int> &price, int w, int n, vector<vector<int>> &dp)
{
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < w + 1; j++)
        {
            if (len[i - 1] <= j)
            {
                dp[i][j] = max((price[i - 1] + dp[i][j - len[i - 1]]), dp[i - 1][j]);
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
    vector<int> length = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> price = {1, 5, 8, 9, 10, 17, 17, 20};
    int w = 8;

    vector<vector<int>> dp(length.size() + 1, vector<int>(w + 1, 0));

    for (int i = 0; i < length.size() + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }

    cout << unbounded_knapsack(length, price, price.size(), length.size(), dp) << endl;

    return 0;
}
