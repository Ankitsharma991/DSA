#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1,2,1,2,1};
    int k = 3;

    int sum = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            if (sum == k)
            {
                count++;
                sum = 0;
            }
            if(nums[i]==k){
                count++;
            }
            
        }
    }
    cout << count-1 << endl;
    return 0;
}