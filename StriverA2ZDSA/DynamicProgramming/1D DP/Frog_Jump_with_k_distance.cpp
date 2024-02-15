#include <bits/stdc++.h>
using namespace std;

int fJumpK(vector<int> &arr, int k, int idx, vector<int> &dp)
{
    if (idx == 0)
    {
        return 0;
    }
    // int left = ;
    // int right = INT_MAX;
    int mmStems = INT_MAX;
    for (int j = 1; j <= k; j++)
    {
        int jump = fJumpK(arr, k, idx - j, dp);
        mmStems = min(mmStems, jump);
    }
    return mmStems;
}

int main()
{

    return 0;
}