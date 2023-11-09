#include <bits/stdc++.h>
using namespace std;
/*
Note:
    this can be found using upper bound and lower bound
    to find that use lower bound and upper bound code in two different functions then
    add this three line of code in main function:
    1. int lb = lower_bound(arr, n, k)
    2. if(lb==n || arr[lb]!=k) return {-1, -1} //number is not present in the array
    3. return {lb, upper_bound(arr, n, k)-1};
*/

vector<int> firstAndLast(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int first = -1;
    int last = -1;

    // Find the first occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            end = mid - 1; // Move left to find the first occurrence
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // Reset start and end for the second search
    start = 0;
    end = nums.size() - 1;

    // Find the last occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            start = mid + 1; // Move right to find the last occurrence
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (first == -1 || last == -1)
    {
        return {-1, -1};
    }
    else
    {
        return {first, last};
    }
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> arr = firstAndLast(nums, target);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
