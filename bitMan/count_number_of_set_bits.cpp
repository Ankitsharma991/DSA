#include <bits/stdc++.h>
using namespace std;

int numberOfSetBit(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int n = 14;
    cout << numberOfSetBit(n) << endl;

    return 0;
}