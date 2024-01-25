#include <bits/stdc++.h>
using namespace std;

void solve(int s, int d, int h, int n, int &count)
{
    if (n == 1)
    {
        cout << "Moving plate from s to d" << endl;
        count++;
        return;
    }
    solve(s, h, d, n - 1, count);
    cout << "moving plate n from source to d" << endl;
    count++;
    solve(h, d, s, n - 1, count);
    return;
}

int main()
{
    int n;
    cin >> n;
    int s = 1;
    int h = 2;
    int d = 3;
    int count = 0;
    solve(s, d, h, n, count);

    return 0;
}