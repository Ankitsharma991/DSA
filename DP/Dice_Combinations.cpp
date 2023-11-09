/*
Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and 6.
for example, if n=0, there are 4 ways:
- 1+1+1
- 1+2
- 2+1
- 3
*/

#include <bits/stdc++.h>
using namespace std;
void solve1()
{
    int n = 3;
    vector<int> dp(n + 1);
    // state
    // dp[i] = number of ways to make a sum of i

    // base case
    dp[0] = 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            // transition
            dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }
    cout << dp[n] << endl;
}

void solve2()
{
    int n = 3;
    vector<int> dp(n + 1);
    // dp[i] = number of ways to make a sum of n
    // such that the current sum is i

    // base case
    dp[n] = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j <= 6; j++)
        {
            // transition
            dp[i] = (dp[i] + dp[i + j]) % MOD;
        }
    }
    // final subproblem
    cout << dp[0] << endl;
}
int main()
{
    solve1();
    solve2();
    return 0;
}