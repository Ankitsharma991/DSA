#include <bits/stdc++.h>
using namespace std;
vector<int> D2B(int n)
{
    vector<int> ans;
    while (n != 0)
    {
        int rem = n % 2;
        ans.emplace_back(rem);
        n /= 2;
    }
    return ans;
}

int main()
{
    int n = 10;
    vector<int> v = D2B(n);
    for (auto it : v)
    {
        cout << it;
    }
    cout << endl;
    return 0;
}