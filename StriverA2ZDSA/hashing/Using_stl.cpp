/*
Note:
STL map and unordered map are same in comparison to hashmap although their writing format are different
Map store all the values in sorted format
Storing and fetching in map both take log(n) time complexity
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        // cin>>arr[i];
        int num;
        cin >> num;
        mp[num]++;
    }

    // for(auto it : mp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << mp[number] << endl;
    }

   

    return 0;
}