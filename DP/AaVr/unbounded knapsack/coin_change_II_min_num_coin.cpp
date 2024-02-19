#include <bits/stdc++.h>
using namespace std;

int unbounded_knapsack(vector<int> &arr, int sum)
{
    int n = arr.size();
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, INT_MAX - 1));

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            for (int i = 1; j < sum + 1; j++)
            {
                if (j % arr[0] == 0)
                {
                    dp[i][j] = j / arr[0];
                }
                else
                {
                    dp[i][j] = INT_MAX - 1;
                }
            }

            for (int j = 1; j <= sum; j++)
            {
                if (arr[i - 1] <= j)
                {
                    dp[i][j] = min(dp[i - 1][j], dp[i][j - arr[i - 1]] + 1);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
    }
    return dp[n][sum] == INT_MAX - 1 ? -1 : dp[n][sum];
}

int main()
{
    vector<int> coins = {2, 3, 1, 5};
    int sum = 9;
    int minCoin = unbounded_knapsack(coins, sum);
    cout << minCoin << endl;
    return 0;
}