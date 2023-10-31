#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // time limit exceeds because of O(n3) time complexity.
    vector<int> nums;
    set<vector<int>> st;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
        }
    }
    vector<vector<int>> ans{st.begin(), st.end()};
    
    return 0;
}