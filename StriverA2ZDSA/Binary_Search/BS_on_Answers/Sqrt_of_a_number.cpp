#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int n)
{
    int ans = 1;
    int low = 1;
    int high = n;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (mid * mid <= n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int bruteForce(int n)
{
    int ans = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i * i <= n)
        {
            ans = i;
        }
        else
        {
            break;
        }
    }
    return ans;
}
int main()
{
    cout << bruteForce(28) << endl;
    cout << binarySearch(28) << endl;
    return 0;
}