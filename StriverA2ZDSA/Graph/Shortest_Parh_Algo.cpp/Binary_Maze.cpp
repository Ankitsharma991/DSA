#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination)
    {
        queue<pair<int, pair<int, int>>> q;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[source.first][source.second] = 0;
        q.push({0, {source.first, source.second}});
        int dr[] = {-1, 0, 1, 0};
        int dr[] = {0, 1, 0, -1};
        while (!q.empty())
        {
            auto it = q.front();
            q.pop();
            int dis = it.first();
            int r = it.second.first;
            int c = it.second.second;

            for (int i = 0; i < 4; i++)
            {
                int newR = r + dr[i];
                int newC = c + dc[i];

                if (newR >= 0 && newR < n && newC >= 0 && newC < m && grid[newR][newC] == 1 && dis + 1 < dist[newR][newC])
                {
                    dist[newR][newC] = 1 + dis;
                    if (newR == destination.first && newC == destination.second)
                        return dis + 1;
                    q.push({1 + dis, {newR, newC}});
                }
            }
        }
        return -1;
    }
}

int
main()
{

    return 0;
}