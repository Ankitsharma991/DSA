#include <bits/stdc++.h>
using namespace std;

int pow(int a, int b)
{
    if (a == 0)
    {
        return 1;
    }
    return b * (a - 1, b);
}

int B2D(vector<int> &v)
{
    int binary = 0;
    int n = v.size();
    int t = 0;
    for (int i = n - 1; i >= 0; i++)
    {
        binary += pow(v[i], t);
        t++;
    }
    return binary;
}

int main()
{

    return 0;
}