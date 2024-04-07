#include <bits/stdc++.h>

using namespace std;

int uniquePath2(vector<vector<int>> &obstacleGrid)
{

    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<int> prev(n, 0);

    for (int j = 0; j < n; j++)
    {
        if (obstacleGrid[0][j] == 1)
            break;
        prev[j] = 1;
    }

    for (int i = 1; i < m; i++)
    {
        vector<int> cur(n, 0);
        if (obstacleGrid[i][0] == 0)
            cur[0] = prev[0];
        for (int j = 1; j < n; j++)
        {
            if (obstacleGrid[i][j] == 1)
                continue;
            cur[j] = cur[j - 1] + prev[j];
        }
        prev = cur;
    }

    return prev[n - 1];
}

// optimized
int uniqP2(vector<vector<int>> &arr)
{
    int m = arr.size();
    int n = arr[0].size();

    vector<vector<int>> dp(m, vector<int>(n, -1));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == -1)
                dp[i][j] = 0;
            else if (i == 0 && j == 0)
                dp[i][j] = 1;
            else
            {
                if (i > 0 && j > 0)
                {
                    int up = dp[i - 1][j];
                    int left = dp[i][j - 1];
                    return up + left;
                }
            }
        }
    }
}

int main()
{

    return 0;
}