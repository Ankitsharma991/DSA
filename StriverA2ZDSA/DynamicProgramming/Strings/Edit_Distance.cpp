#include <bits/stdc++.h>
using namespace std;

bool f(int i, int j, const string &str1, const string &str2, vector<vector<int>> &dp)
{
    if (i < 0 && j < 0)
        return true;
    if (i < 0 && j >= 0)
        return false;
    if (j < 0 && i >= 0)
    {
        for (int p = 0; p <= i; p++)
        {
            if (str2[p] != '*')
                return false;
        }
    }

    if (dp[i][j] != -1)
        return dp[i][j];
    if (str1[i - 1] == str2[j - 1])
        return dp[i][j] = f(i - 1, j - 1, str1, str2, dp);
    else
        return dp[i][j] = f(i - 1, j, str1, str2, dp) || f(i, j - 1, str1, str2, dp);
}

int main()
{
    string str1 = "?a";
    string str2 = "cb";

    int n = str1.size();
    int m = str2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    cout << f(n-1, m-1, str1, str2, dp) << endl;

    return 0;
}