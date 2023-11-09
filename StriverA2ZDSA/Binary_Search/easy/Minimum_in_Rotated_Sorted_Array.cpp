#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[low] <= nums[mid])
        {
            ans = min(ans, nums[low]);
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            ans = min(ans, nums[mid]);
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 4, 5, 1, 2};
    cout << findMin(arr) << endl;
    return 0;
}