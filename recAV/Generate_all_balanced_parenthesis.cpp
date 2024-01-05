#include <bits/stdc++.h>
using namespace std;

vector<string> callBalacedParenthesis(int n)
{
    vector<string> ans;
    int open = n;
    int close = n;
    string op = "";
    solveBalancedParenthesis(open, close, op, ans);
}

void solveBalancedParenthesis(int open, int close, string op, vector<string> &v)
{
    if (open == 0 && close == 0)
    {
        v.push_back(op);
        return;
    }
    if (open != 0)
    {
        string op1 = op;
        op1.push_back('(');
        solveBalancedParenthesis(open - 1, close, op, v);
    }
    if (close > open)
    {
        string op2 = op;
        op2.push_back(')');
        solveBalancedParenthesis(open, close - 1, op, v);
    }
    return;
}

int main()
{
    int n = 3;
    callBalacedParenthesis(n);

    return 0;
}