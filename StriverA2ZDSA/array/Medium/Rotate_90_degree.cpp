#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Logic:
    1. Transpose the matrix
    2. reverse every row
*/

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = a;
}

int main()
{
    vector<vector<int>> matrix;
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}