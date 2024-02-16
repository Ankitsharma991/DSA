#include <bits/stdc++.h>
using namespace std;

int unbounded_knapsack(const vector<int> &coin, int sum)
{
    int n = coin.size();
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (coin[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j] + dp[i][j - coin[i - 1]];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][sum];
}

int main()
{
    vector<int> coin = {2, 3, 1, 5};
    int sum = 5;

    int subsetCount = unbounded_knapsack(coin, sum);

    cout << subsetCount << endl;

    return 0;
}
