#include <bits/stdc++.h>
using namespace std;

void permutChange(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }
    string op1 = op;
    string op2 = op;
    op1.push_back(ip[0]);
    op2.push_back(toupper(ip[0]));
    permutChange(ip, op1);
    permutChange(ip, op2);
    return;
}

int main()
{
    string s;
    cin >> s;
    string op = "";
    permutChange(s, op);

    return 0;
}