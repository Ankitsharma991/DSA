#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {3, 2, 1};
    bool printed = false;

    int ind = -1;
    int n = nums.size();

    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            ind = i;
            break;
        }
    }

    if (ind == -1)
    {
        reverse(nums.begin(), nums.end());
        for (auto it : nums)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    for (int i = n - 1; i > ind; i--)
    {
        if (nums[i] > nums[ind])
        {
            swap(nums[i], nums[ind]);
            break;
        }
        printed = true;
    }

    reverse(nums.begin() + ind + 1, nums.end());

    if (printed)
    {

        for (auto it : nums)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}