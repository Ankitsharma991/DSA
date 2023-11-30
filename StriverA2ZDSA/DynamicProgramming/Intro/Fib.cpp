#include <bits/stdc++.h>
using namespace std;

int tabulation(vector<int> &dp, int n)
{
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int f(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    else
    {
        return dp[n] = f(n - 1, dp) + f(n - 2, dp);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << f(n, dp) << endl;
    ;
    cout << tabulation(dp, n) << endl;

    return 0;
}