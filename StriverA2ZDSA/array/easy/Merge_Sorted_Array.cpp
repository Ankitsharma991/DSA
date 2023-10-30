#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = nums1.size();
    int n = nums2.size();

    for (int i = 0; i < m; i++)
    {
        nums2.push_back(nums1[i]);
    }
    nums1.clear();

    for (int i = 0; i < nums2.size(); i++)
    {
        if (nums2[i] != 0)
        {
            nums1.push_back(nums2[i]);
        }
    }
    sort(nums1.begin(), nums1.end());

    for (auto it : nums1)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}