#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// the optimal solution is:
void fourSum(int target, vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < n - 2; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[l];
                if (sum == target)
                {
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                    while (k < l && nums[l] == nums[l + 1])
                        l--;
                }
                else if (sum < target)
                {
                    k++;
                }
                else
                {
                    l--;
                }
            }
        }
    }

    // printing the ans vector
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "{";
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "}," << endl;
    }
}

int main()
{
    // brute method : use four loops i, j, k, l and print those indices(in an array) whose sum gives the target value.
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    fourSum(target, nums);
    return 0;
}