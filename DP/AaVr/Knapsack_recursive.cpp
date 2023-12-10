#include <bits/stdc++.h>
using namespace std;

int maxNum(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    return b;
}

int knapsack(vector<int> &wt, vector<int> &val, int w, int n)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (wt[n - 1] <= w)
    {
        return maxNum(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1), knapsack(wt, val, w, n - 1));
    } else{
        return knapsack(wt, val, w, n-1);
    }
}

int main()
{
    vector<int> a = {1,2,3,4,5};
    vector<int>v = {2,4,5,6,7};
    int w = 5;
    cout<<knapsack(a, v, w, a.size()-1)<<endl;;
    return 0;
}