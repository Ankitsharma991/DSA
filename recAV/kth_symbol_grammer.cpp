#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k)
{
    if (n == 1 && k == 1)
    {
        return 0;
    }
    int length = pow(2, n - 1);
    int mid = length / 2;
    if (k <= mid)
    {
        return solve(n - 1, k);
    }
    else
    {
        return solve(n - 1, k - mid);
    }
}

int main()
{

    return 0;
}