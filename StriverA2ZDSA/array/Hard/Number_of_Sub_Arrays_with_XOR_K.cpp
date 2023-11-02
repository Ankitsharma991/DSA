#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subArrayWithSumK(vector<int> &a, int k)
{
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        xr = xr ^ a[i];
        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}

// Brute solution
int bruteMeth(vector<int> &a, int t)
{
    int n = a.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int numXor = 0;
            for (int k = i; k <= j; k++)
            {
                numXor = numXor ^ a[k];
            }
            if (numXor == t)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> a = {1, 2, 1, 2};
    int target = 2;
    cout << bruteMeth(a, target) << endl;
    cout << subArrayWithSumK(a, target) << endl;
    return 0;
}