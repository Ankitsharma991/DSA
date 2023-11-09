#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return true;

        if (nums[low] == nums[mid] && nums[mid] == nums[high])
        {
            low++;
            high--;
            continue;
        }

        if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target <= nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (nums[mid] <= target && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {3, 1, 2, 3, 3, 3, 3};
    int target = 0;
    cout << search(arr, target) << endl;
    return 0;
}