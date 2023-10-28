
/*
Note:
    this problem can be done using xor operator
    i.e a^a is 0 and 0^b is the number so, this is one of the useful method.
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 2, 1, 3, 4};
    map<int, int> mp;

    int num;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second == 1)
        {
            num = it.first;
            break;
        }
    }
    cout << num << endl;
    return 0;
}