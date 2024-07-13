/*
Problem Statement:
str1 = "bleed"
str2 = "blue"

find out shortest string str3 ("bleued") that should contains both str1 and str2 as a substrings.
*/

#include <bits/stdc++.h>
using namespace std;

int LCS(int n1, int n2, const string &str1, const string &str2, vector<vector<int>> &dp)
{
    if (n1 == 0 || n2 == 0)
        return 0;
    if (dp[n1][n2] != -1)
        return dp[n1][n2];

    if (str1[n1 - 1] == str2[n2 - 1])
        return dp[n1][n2] = 1 + LCS(n1 - 1, n2 - 1, str1, str2, dp);
    else
        return dp[n1][n2] = max(LCS(n1 - 1, n2, str1, str2, dp), LCS(n1, n2 - 1, str1, str2, dp));
}

int main()
{
    string str1 = "abac";
    string str2 = "cab";

    int n1 = str1.size();
    int n2 = str2.size();

    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, -1));

    int lcsLength = LCS(n1, n2, str1, str2, dp);
    int i = n1;
    int j = n2;

    cout << lcsLength << endl;

    string ans = "";

    while (i > 0 && j > 0)
    {
        if (str1[i - 1] == str2[j - 1])
        {
            ans += str1[i - 1];
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            ans += str1[i - 1];
            i--;
        }
        else
        {
            ans += str2[j - 1];
            j--;
        }
    }

    while (i > 0)
    {
        ans += str1[i - 1];
        i--;
    }
    while (j > 0)
    {
        ans += str2[j - 1];
        j--;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}