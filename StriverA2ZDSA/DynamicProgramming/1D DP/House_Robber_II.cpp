#include <bits/stdc++.h>
using namespace std;

int maxiNumNonAdjacentSum(vector<int> &nums)
{
    int n = nums.size();
    int prev = nums[0];
    int prev2 = 0;
    for (int i = 0; i < n; i++)
    {
        int take = nums[i];
        if (i > 1)
            take += prev2;

        int notTake = 0 + prev;

        int curi = max(take, notTake);
        prev2 = prev;
        prev = curi;
    }
    return prev;
}

int main()
{
    vector<int> valueInHouse;
    vector<int> temp1, temp2, ;
    int n = valueInHouse.size();

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            temp1.push_back(valueInHouse[i]);
        if (i != n - 1)
            temp2.push_back(valueInHouse[i]);
    }
    return max(maxiNumNonAdjacentSum(temp1), maxiNumNonAdjacentSum(temp2));

    return 0;
}
