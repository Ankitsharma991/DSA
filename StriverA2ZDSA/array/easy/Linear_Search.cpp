#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    vector<int> arr = {1, 4, 56, 7, 8, 9, 2, 3, 18};
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}