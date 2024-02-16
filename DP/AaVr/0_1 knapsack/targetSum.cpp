#include <bits/stdc++.h>
using namespace std;

int subsetSumCount(const vector<int> &arr, int sum)
{
    int n = arr.size();
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][sum];
}

int totalSum(vector<int> &arr)
{
    int sum = 0;
    for (auto it : arr)
    {
        sum += it;
    }
    return sum;
}

int main()
{
    vector<int> arr = {1, 1, 1, 1, 1};
    int diff = 3;
    int sum = (diff + totalSum(arr)) / 2;

    int subsetCount = subsetSumCount(arr, sum);

    cout << subsetCount << endl;

    return 0;
}
