#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    int a, b;
    for (int i = 0; i < nums.size(); i++)
    {
        int numTofind = target - nums[i];
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (numTofind == nums[j])
            {
                a = i;
                b = j;
                break;
            }
        }
        cout << a << " " << b << endl;
        return 0;
    }
}