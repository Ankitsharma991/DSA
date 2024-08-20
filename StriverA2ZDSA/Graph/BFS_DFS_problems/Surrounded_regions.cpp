#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &mat, int delRow[], int delCol[])
    {
        vis[row][col] = 1;
        int n = mat.size();
        int m = mat[0].size();
        // check for top, right, bottom, left
        for (int i = 0; i < 4; i++)
        {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];

            if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && !vis[nRow][nCol] && mat[nRow][nCol] == '0')
            {
                dfs(nRow, ncol, vis, mat, delRow, delCol);
            }
        }
    }

public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int delRow[] = {-1, 0, +1, 0};
        int delCol[] = {0, 1, 0, -1};
        // traverse first row and last row
        for (int j = 0; j < m; j++)
        {
            // first row
            if (!vis[0][j] && mat[0][j] == '0')
            {
                dfs(0, j, vis, mat, delRow, delCol);
            }

            // last row
            if (!vis[n - 1][j] && mat[n - 1][j] == '0')
            {
                dfs(n - 1, j, vis, mat, delRow, delCol);
            }
        }

        for (int i = 0; i < n; i++)
        {
            // first column
            if (!vis[i][0] && mat[i][0] == '0')
            {
                dfs(i, 0, vis, mat, delRow, delCol);
            }

            // last column
            if (!vis[i][m - 1] && mat[i][m - 1] == '0')
            {
                dfs(i, m - 1, vis, mat, delRow, delCol);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && mat[i][j] == '0')
                {
                    mat[i][j] = 'X';
                }
            }
        }

        return mat;
    }
} int main()
{

    return 0;
}