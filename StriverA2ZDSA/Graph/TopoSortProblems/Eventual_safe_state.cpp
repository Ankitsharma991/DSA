#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> eventualSafeNodes(vector<vector<int>> &graph)
    {
        int V = graph.size();
        vector<int> adj[V];
        vector<int> indegree(V, 0); // Initialize a vector with size V and all values set to 0

        // Reverse the edges of the graph to create a new adjacency list
        for (int i = 0; i < V; i++)
        {
            for (auto it : graph[i])
            {
                adj[it].push_back(i); // Reverse the direction
                indegree[i]++;        // Increment indegree for original node
            }
        }

        queue<int> q;
        vector<int> safeNodes;

        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            safeNodes.push_back(node);

            for (auto it : adj[node])
            {
                indegree[it]--;
                if (indegree[it] == 0)
                    q.push(it);
            }
        }

        sort(safeNodes.begin(), safeNodes.end());
        return safeNodes;
    }
};

int main()
{

    return 0;
}