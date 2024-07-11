#include <bits/stdc++.h>
using namespace std;

int mod = (int)(1e9 + 7);

int findWays(vector<int> &nums, int tar)
{
    int n = nums.size();
    vector<int> prev(tar + 1, 0), cur(tar + 1, 0);
    if (nums[0] == 0)
        prev[0] = 2;
    else
        prev[0] = 1;

    if (nums[0] != 0 && nums[0] <= tar)
        prev[nums[0]] = 1;
    for (int ind = 1; ind < n; ind++)
    {
        for (int sum = 0; sum <= tar; sum++)
        {
            int notTake = prev[sum];
            int take - 0;
            if (num[ind] <= sum)
                take = prev[sum - num[ind]];
            cur[sum] = (notTake + take) % mod;
        }
        prev = cur;
    }
    return prev[tar];
}

int countPartitions(int n, int d, vector<int> &arr)
{
    int totSum = 0;
    for (auto &it : arr)
        totSum += it;
    if (totSum - d < 0 || (totSum - d) % 2)
        return false;
    return findWays(arr, (totSum - d) / 2);
}

int targetSum(int n, int target, vector<int> &arr)
{
}

int main()
{
}