#include <bits/stdc++.h>
using namespace std;
bool bruteForce(vector<vector<int>> &matrix, int target)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

// optimal
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        if (binary_search(matrix[i].begin(), matrix[i].end(), target))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    int target = 12;
    cout << bruteForce(matrix, 0) << endl;
    cout << searchMatrix(matrix, 12) << endl;
    return 0;
}