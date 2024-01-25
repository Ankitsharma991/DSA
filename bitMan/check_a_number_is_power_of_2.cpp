#include <bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n)
{
    return (n & (n - 1) == 0);
}

int main()
{
    int n = 16;
    if (powerOfTwo(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}