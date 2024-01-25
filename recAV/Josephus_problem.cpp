#include <bits/stdc++.h>
using namespace std;

void josephMethod(vector<int> &v, int k, int index, int &ans)
{
    if (v.size() == 1)
    {
        ans = v[0];
        return;
    }
    index = (index + k) % v.size();
    v.erase(v.begin() + index);
    josephMethod(v, k, index, ans);
    return;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    k--;
    int index = 0;
    int ans = -1;
    josephMethod(v, k, index, ans);
    cout << ans << endl;

    return;
}