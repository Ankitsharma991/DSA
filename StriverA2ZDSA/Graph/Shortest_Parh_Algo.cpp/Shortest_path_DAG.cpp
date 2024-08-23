#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void topoSort(int node, vector<pair<int, int>> adj[], vector<int> &vis, stack<int> &st)
    {
        vis[node] = 1;
        for (auto it : adj[node])
        {
            int v = it.first;
            if (!vis[v])
            {
                topoSort(v, adj, vis, st);
            }
        }
        st.push(node);
    }

public:
    vector<int> shortestPath(int N, int M, vector<vector<int>> &edges)
    {
        vector<pair<int, int>> adj[N];
        for (int i = 0; i < M; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            adj[u].push_back({v, wt});
        }

        // Find the topological sort
        vector<int> vis(N, 0);
        stack<int> st;
        for (int i = 0; i < N; i++)
        {
            if (!vis[i])
            {
                topoSort(i, adj, vis, st);
            }
        }

        // Initialize distance array
        vector<int> dist(N, INT_MAX);
        dist[0] = 0;

        // Process nodes in topological order
        while (!st.empty())
        {
            int node = st.top();
            st.pop();

            if (dist[node] != INT_MAX)
            {
                for (auto it : adj[node])
                {
                    int v = it.first;
                    int wt = it.second;

                    if (dist[node] + wt < dist[v])
                    {
                        dist[v] = dist[node] + wt;
                    }
                }
            }
        }

        // Replace INT_MAX with -1 for unreachable nodes
        for (int i = 0; i < N; i++)
        {
            if (dist[i] == INT_MAX)
            {
                dist[i] = -1;
            }
        }

        return dist;
    }
};

int main()
{

    return 0;
}