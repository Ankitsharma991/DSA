#include <bits/stdc++.h>
using namespace std;

void solveProblem(int one, int zero, int n, string op)
{
    if (n == 0)
    {
        cout << op << " ";
        return;
    }
    string op1 = op;
    op1.push_back('1');
    solveProblem(one + 1, zero, n - 1, op1);
    if (one > zero)
    {
        string op2 = op;
        op2.push_back('0');
        solveProblem(one, zero + 1, n - 1, op2);
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    string op = "";
    int one = 0;
    int zero = 0;

    solveProblem(one, zero, n, op);

    return 0;
}