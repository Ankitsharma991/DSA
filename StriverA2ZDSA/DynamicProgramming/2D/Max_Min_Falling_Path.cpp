#include <bits/stdc++.h>
using namespace std;

// minimum falling path sum

int f(int i, int j, vector<vector<int>> &matrix)
{
    if (j < 0 || j >= matrix[0].size())
        return -1e8;
    if (i == 0)
        return matrix[0][j];

    int u = matrix[i][j] + f(i - 1, j, matrix);
    int ld = matrix[i][j] + f(i - 1, j - 1, matrix);
    int rd = matrix[i][j] + f(i - 1, j + 1, matrix);

    return min(u, min(ld, rd));
}

int minFallingPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int mini = -1e8;
    for (int j = 0; j < m; j++)
    {
        mini = min(mini, f(n - 1, j, matrix));
    }
    return mini;
}

int main()
{
}