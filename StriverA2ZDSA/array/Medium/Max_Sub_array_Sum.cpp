#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int sum = 0;
    int maxi = INT_MIN;
    for (auto it : a)
    {
        sum += it;
        maxi = max(sum, maxi);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxi << endl;
    return 0;
}