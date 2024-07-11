#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str1 = "";
    string str2 = "";

    int n1 = str1.size();
    int n2 = str2.size();

    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, -1));
    // cout << LCSubstring(n1 - 1, n2 - 1, str1, str2, dp) << endl;
    for(int i=0;i<=n1;i++) dp[i][0] = 0;
    for(int j=0;j<=n2;j++) dp[0][j] = 0;

    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            if(str1[i-1]==str2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = 0;
        }
    }

    // finding the maximum length
    int ans = INT_MIN;
    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            ans = max(ans, dp[i][j]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
