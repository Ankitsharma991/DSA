#include <bits/stdc++.h>
using namespace std;

void permutWithSpace(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }
    string op1 = op;
    string op2 = op;
    op1.push_back('-');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 1);
    permutWithSpace(ip, op1);
    permutWithSpace(ip, op2);
    return;
}

int main()
{
    string ip;
    cin >> ip;

    string op = "";
    op.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    permutWithSpace(ip, op);

    return 0;
}