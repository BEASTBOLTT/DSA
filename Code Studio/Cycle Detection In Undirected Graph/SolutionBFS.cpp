#include <bits/stdc++.h>

bool isCyclicBFS(int i, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited)
{
    unordered_map<int, int> parent;

    parent[i] = -1;

    visited[i] = true;
    queue<int> q;

    q.push(i);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        for (auto x : adj[front])
        {
            if (visited[x] && x != parent[front])
            {
                return true;
            }
            else if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
                parent[x] = front;
            }
        }
    }
    return false;
}

string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < m; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }

    unordered_map<int, bool> visited;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] != true)
        {
            if (isCyclicBFS(i, adj, visited))
            {
                return "Yes";
            }
        }
    }

    return "No";
}