#include <bits/stdc++.h>
using namespace std;

void printSubset(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << " ";
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    printSubset(ip, op1);
    printSubset(ip, op2);
}

int main()
{
    string ip;
    cin >> ip;
    string op = "";
    printSubset(ip, op);
    return 0;
}