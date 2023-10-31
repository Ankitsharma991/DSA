#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// 1st Question: For given row and column, find the value from pascal triangle. the formula for calculation is: (row-1)C(col-1)
// refer to leetcode solution for it's bug

int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int pascalValue(int row, int col)
{
    int rowValue = fact(row);
    int colValue = fact(col);
    int subValue = fact(row - col);

    int divValue = (colValue * subValue);
    return rowValue / divValue;
}

// Second Type Questions: Print any row.Nth row have n number of elements.
void nthRow(int n)
{
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        ans.push_back(pascalValue(n - 1, i - 1));
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

vector<long long> pascalRow(int n)
{
    vector<long long> ans;
    for (int i = 1; i <= n; i++)
    {
        ans.push_back(pascalValue(n - 1, i - 1));
    }
    return ans;
}

void nPascalRow(int nRow)
{
    vector<vector<long long>> totalAns;
    for (long long i = 1; i <= nRow; i++)
    {
        totalAns.push_back(pascalRow(i));
    }

    for (int i = 0; i < totalAns.size(); i++)
    {
        for (int j = 0; j < totalAns[0].size(); j++)
        {
            cout << totalAns[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // cout << pascalValue(4, 2) << endl;
    // nthRow(5);
    nPascalRow(5);

    return 0;
}
