#include <bits/stdc++.h>
using namespace std;

int LCS(int idx1, int idx2, const string text1, const string text2, vector<vector<int>> &dp)
{
    if (idx1 < 0 || idx2 < 0)
        return 0;
    if (dp[idx1][idx2] != -1)
    {
        return dp[idx1][idx2];
    }

    if (text1[idx1] == text2[idx2])
    {
        return dp[idx1][idx2] = 1 + LCS(idx1 - 1, idx2 - 1, text1, text2, dp);
    }
    return dp[idx1][idx2] = max(LCS(idx1 - 1, idx2, text1, text2, dp), LCS(idx1, idx2 - 1, text1, text2, dp));
}

int main()
{

    string text1 = "abcde";
    string text2 = "ace";

    int n1 = text1.size();
    int n2 = text2.size();

    vector<vector<int>> dp(n1, vector<int>(n2, -1));
    cout << LCS(n1 - 1, n2 - 1, text1, text2, dp) << endl;

    return 0;
}