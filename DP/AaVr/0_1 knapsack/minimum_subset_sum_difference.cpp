#include <bits/stdc++.h>
using namespace std;

int subsetSumMinDiff(const vector<int> &arr, int range)
{
    int n = arr.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(range + 1, false));

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= range; j++)
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

    vector<int> validSum;
    for (int i = 0; i <= range; i++)
    {
        if (dp[n][i])
        {
            validSum.push_back(i);
        }
    }

    int minSumDiff = INT_MAX;
    for (int i = 0; i < validSum.size() / 2; i++)
    {
        minSumDiff = min(minSumDiff, range - (2 * validSum[i]));
    }

    return minSumDiff;
}

int totalSum(const vector<int> &arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    vector<int> arr = {1, 6, 11, 5};
    int range = totalSum(arr);

    int minSubsetSumDiff = subsetSumMinDiff(arr, range);

    cout << minSubsetSumDiff << endl;

    return 0;
}
