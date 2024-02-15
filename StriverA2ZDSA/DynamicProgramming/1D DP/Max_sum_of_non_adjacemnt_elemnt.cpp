#include <bits/stdc++.h>
using namespace std;

int sumNonAdj(vector<int> &a, int ind)
{
    if (a[ind] == 0)
    {
        return a[ind];
    }
    if (ind < 0)
    {
        return 0;
    }
    int pick = a[ind] + sumNonAdj(a, ind - 2);
    int nonPick = 0 + sumNonAdj(a, ind);
    return max(pick, nonPick);
}

int main()
{

    return 0;
}