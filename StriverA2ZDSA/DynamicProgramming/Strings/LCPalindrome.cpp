#include<bits/stdc++.h>
using namespace std;

int LCPalindrome(int n1, int n2, const string str1, const string str2, vector<vector<int>>&dp){
    if(n1<0 || n2<0) return 0;
    if(dp[n1][n2]!=-1) return dp[n1][n2];

    if(str1[n1] == str2[n2]) return dp[i][j] = 1 + LCPalindrome(n1-1, n2-1, str1, str2, dp);
    else return dp[i][j] = max(LCPalindrome(n1-1, n2, str1, str2, dp), LCPalindrome(n1, n2-1, str1, str2, dp));
}

int main(){

    string str1 = "";
    string str2 = str1;
    reverse(str2.begin(), str2.end());
    int n = str1.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));

    cout<<LCPalindrome(n-1, n-1, str1, str2, dp)<<endl;
    
    return 0;
}