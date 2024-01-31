#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 3, 2, 1, 4, 5, 4, 7, 5};
    int xo_r = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xo_r = xo_r ^ arr[i];
    }

    return 0;
}