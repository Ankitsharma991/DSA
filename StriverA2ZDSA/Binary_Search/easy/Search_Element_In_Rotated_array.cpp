#include <iostream>
#include <bits/stdc++.h>
/*
The position of target can be traced using on half. identify which half is sorted half
*/
using namespace std;

int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;

        // left sorted
        if (nums[mid] >= nums[low])
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
        // right sorted
        else
        {
            if (nums[low] >= target && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {4,5,6,7,0,1,2};
    int target=0;
    cout << search(arr, target) << endl;

    return 0;
}