#include <bits/stdc++.h>
using namespace std;

int xorOfN(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    if (n % 4 == 3)
        return 0;
}

int main()
{
    int n = 5;
    cout << "xor of number from 1 to 5 is: " << xorOfN(n) << endl;

    return 0;
}