#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> dp(100, -1);
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n] << endl;
    return 0;
}