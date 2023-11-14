#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> nums3;
    for (int i = 0; i < nums1.size(); i++)
    {
        nums3.push_back(nums1[i]);
    }

    for (int i = 0; i < nums2.size(); i++)
    {
        nums3.push_back(nums2[i]);
    }

    sort(nums3.begin(), nums3.end());

    double n = nums3.size();
    if ((int)n % 2 == 0)
    {
        int idx1 = (int)n / 2 - 1;
        int idx2 = (int)n / 2;
        return (double)(nums3[idx1] + nums3[idx2]) / 2;
    }
    else
    {
        return (double)nums3[(int)n / 2];
    }
}

int optimal(vector<int> &nums1, vector<int> &nums2)
{
    if (nums2.size() < nums1.size())
        return optimal(nums2, nums1);
    int n1 = nums1.size();
    int n2 = nums2.size();
    int low = 0;
    int high = n1;

    while (low <= high)
    {
        int cut1 = (low + high) >> 1;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;

        int left1 = cut1 == 0 ? INT_MIN : nums1[cut1 - 1];
        int left2 = cut2 == 0 ? INT_MIN : nums2[cut2 - 1];

        int right1 = cut1 == n1 ? INT_MAX : nums1[cut1];
        int right2 = cut2 == n2 ? INT_MAX : nums2[cut2];

        if (left1 <= right2 && left2 <= right1)
        {
            if ((n1 + n2) % 2 == 0)
            {
                return (max(left1, left2) + min(right1, right2)) / 2.0;
            }
            else
            {
                max(left1, left2);
            }
        }
        else if (left1 > right2)
        {
            high = cut1 - 1;
        }
        else
        {
            low = cut1 + 1;
        }
    }
    return 0.0;
}

int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    cout << findMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}