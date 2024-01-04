#include <bits/stdc++.h>
using namespace std;

int uniqueNum(vector<int> &arr)
{
    int xo_r = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        xo_r = xo_r ^ arr[i];
    }
    return xo_r;
}

int main()
{
    vector<int> arr = {};
    cout << "Unique element: " << uniqueNum(arr) << endl;

    return 0;
}