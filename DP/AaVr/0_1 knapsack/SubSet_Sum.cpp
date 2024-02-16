#include <bits/stdc++.h>
using namespace std;

bool subsetSum(const vector<int> &arr, int sum)
{
    int n = arr.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
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
    vector<int> arr = {2, 3, 7, 8, 10};
    int sum = 11;

    bool hasSubset = subsetSum(arr, sum);

    cout << hasSubset << endl;

    return 0;
}
