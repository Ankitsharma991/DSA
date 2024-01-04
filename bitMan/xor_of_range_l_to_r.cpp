#include <bits/stdc++.h>
using namespace std;
// hint: xor(l-1) ^ xor(r)

int xo_r(int n)
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
    int l = 5;
    int r = 10;
    int l_r_xor = xo_r(l - 1) ^ xo_r(r);
    cout << l_r_xor << endl;

    return 0;
}