#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(V, 1e9);
        dist[S] = 0;
        pq.push({0, S});

        while (!pq.empty())
        {
            int node = pq.top().second;
            int currDist = pq.top().first;
            pq.pop();

            for (auto &edge : adj[node])
            {
                int adjNode = edge[0];
                int edgeWeight = edge[1];

                if (currDist + edgeWeight < dist[adjNode])
                {
                    dist[adjNode] = currDist + edgeWeight;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }

        return dist;
    }
};


int main()
{

    return 0;
}