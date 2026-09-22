#include <bits/stdc++.h>

bool isCyclicDFS(int i, unordered_map<int, bool> &dfsVisited, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited)
{
    visited[i] = true;
    dfsVisited[i] = true;

    for (int x : adj[i])
    {
        if (!visited[x])
        {
            if (isCyclicDFS(x, dfsVisited, adj, visited))
            {
                return true;
            }
        }
        else if (dfsVisited[x])
        {
            return true;
        }
    }
    dfsVisited[i] = false;
    return false;
}

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < edges.size(); i++)
    {
        adj[edges[i].first].push_back(edges[i].second);
    }

    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsVisited;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] != true)
        {
            if (isCyclicDFS(i, dfsVisited, adj, visited))
            {
                return true;
            }
        }
    }

    return false;
}