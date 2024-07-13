#include <bits/stdc++.h>
using namespace std;

int minOperation(int n1, int n2, const string &str1, const string &str2, vector<vector<int>> &dp)
{
    if (n1 < 0 || n2 < 0)
        return 0;
    if (dp[n1][n2] != -1)
        return dp[n1][n2];

    if (str1[n1 - 1] == str2[n2 - 1])
        return dp[n1][n2] = 1 + minOperation(n1 - 1, n2 - 1, str1, str2, dp);
    else
        return dp[n1][n2] = max(minOperation(n1 - 1, n2, str1, str2, dp), minOperation(n1, n2 - 1, str1, str2, dp));
}

int main()
{
    string str1 = "abcd";
    string str2 = "anc";

    int n1 = str1.size();
    int n2 = str2.size();

    vector<vector<int>> dp(n1, vector<int>(n2, -1));

    int minOperations = minOperation(n1, n2, str1, str2, dp);

    cout << (n1 + n2) - (2 * minOperations) << endl;

    return 0;
}