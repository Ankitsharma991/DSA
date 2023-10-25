#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;

    // pre compute
    // int hash[256] = {0};
    int hash[25] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        // hash[s[i]]++;
        hash[s[i]-'a']++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetch
        // cout<<hash[c]<<endl;
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}

