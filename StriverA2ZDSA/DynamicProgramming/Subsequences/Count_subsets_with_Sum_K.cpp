#include <bits/sched.h>
using namespace std;

int f(int ind, int sum, vector<int> &num, vector<vector<int>> &dp)
{
    if (sum == 0)
        return 1;
    if (ind == 0)
        return num[0] == sum;

    // incase 0 is considered
    // if (ind == 0)
    // {
    //     if (sum == 0 && num[0] == 0)
    //         return 2;
    //     if (sum == 0 || sum == num[0])
    //         return 1;
    //     return 0
    // }

    if (dp[ind][sum] != -1)
        return dp[ind][sum];

    int notTake = f(ind - 1, num, num, dp);
    int take = 0;
    if (num[ind] <= sum)
        take = f(ind - 1, sum - num[ind], num, dp);
    return dp[ind][sum] = notTake + take;
}

int main()
{
    vector<int> nums = {};
    int target = 3;
    int n = nums.size();

    vector<vector<int>> dp(n, vector<int>(target + 1, -1));
    return f(n - 1, target, nums, dp);
}