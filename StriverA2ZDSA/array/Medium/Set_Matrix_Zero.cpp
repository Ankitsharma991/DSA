#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void changeZero(vector<vector<int>> &matrix, int a, int b)
{
    int row = matrix.size();
    int col = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == a || j == b)
            {
                matrix[i][j] = 0;
            }
        }
    }
}
int main()
{
    vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};

    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> a;
    vector<int> b;

    cout << row << " " << col << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                a.push_back(i);
                b.push_back(j);
                // changeZero(matrix, i, j);
            }
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        changeZero(matrix, a[i], b[i]);
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}