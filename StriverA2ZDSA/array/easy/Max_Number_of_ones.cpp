#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1};
    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            if (count >= maxCount)
            {
                maxCount = count;
            }
            count = 0;
        }
    }
    if (count >= maxCount)
    {
        maxCount = count;
    }
    cout << maxCount << endl;
    return 0;
}