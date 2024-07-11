#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text1 = "abcdef";
    string text2 = "abc";

    int n1 = text1.size();
    int n2 = text2.size();

    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, -1));
    for (int i = 0; i <= n1; i++)
        dp[i][0] = 0;
    for (int i = 0; i <= n2; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            if(text1[i-1] == text2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    // cout<<dp[n1][n2]<<endl;
    int i = n1;
    int j = n2;
    string str = "";
    while (i > 0 && j > 0)
    {
        if (text1[i - 1] == text2[j - 1])
        {
            str += text1[i - 1];
            i=i-1;
            j=j-1;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            i = i - 1;
        }
        else
        {
            j = j - 1;
        }
    }
    reverse(str.begin(), str.end());
    cout<<str<<endl;
    return 0;
}