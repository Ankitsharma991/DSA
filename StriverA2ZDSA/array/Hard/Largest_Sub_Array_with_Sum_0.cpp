#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A = {-1, 3, 2, -2, -8, 1, 7, 10, 2};
    map<int, int> mpp = {};
    int maxi = 0; // maximum length of the sub-array
    int sum = 0;
    int n = A.size();

    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        if (sum == 0)
        {
            maxi = i + 1;
        }
        else
        {
            if (mpp.find(sum) != mpp.end())
            {
                maxi = max(maxi, i - mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
        }
    }

    cout << maxi << endl;
    return 0;
}
