#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, string str1, string str2, vector<vector<int>> &dp)
{
    if (j < 0)
        return 1;
    if (i < 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    if (str1[i-1] == str2[j-1])
        return f(i - 1, j - 1, str1, str2, dp) + f(i - 1, j, str1, str2, dp);
    else
        return f(i - 1, j, str1, str2, dp);
}

int main()
{
    string str1 = "babgbag";
    string str2 = "bag";

    int n1 = str1.size();
    int n2 = str2.size();

    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, -1));
    cout << f(n1, n2, str1, str2, dp) << endl;



    // using tabulation:
    vector<vector<int>> dp(n1+1, vector<int>(n2+1, 0));

    for(int i=0;i<n1;i++) dp[i][0] = 1;
    for(int i=0;i<n2;i++) dp[0][i] = 0;

    for(int i=1;i<n1;i++){
        for(int j=1;j<n2;j++){
            if(str1[i]==str2[j]) dp[i][j] = dp[i-1][j] + dp[i][j-1];
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout<<dp[n1][n2]<<endl;

    return 0;
}
