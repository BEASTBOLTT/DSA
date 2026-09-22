#include <bits/stdc++.h>

void topoSort(int i, vector<bool> &visited, unordered_map<int, list<int>> &adj, stack<int> &s)
{
    visited[i] = true;

    for (int x : adj[i])
    {
        if (!visited[x])
        {
            topoSort(x, visited, adj, s);
        }
    }

    s.push(i);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < e; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
    }

    vector<bool> visited(v);
    stack<int> s;

    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            topoSort(i, visited, adj, s);
        }
    }

    vector<int> ans;

    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}