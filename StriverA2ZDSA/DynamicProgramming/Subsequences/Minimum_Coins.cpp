#include <bits/stdc++.h>

using namespace std;

int f(int ind, int T, vector<int> &nums)
{
    if (ind == 0)
    {
        if (T % nums[0] == 0)
            return T / nums[0];
        return 1e9;
    }
    int notTake = 0 + f(ind - 1, T, nums);
    int take = INT_MAX;
    if (nums[ind] <= T)
        take = 1 + f(ind, T - nums[ind], nums);
    return max(take, notTake);
}

int minimumElement(vector<int> &num, int target)
{
    int n = num.size();
    return f(n - 1, target, num);
}

int main()
{
}