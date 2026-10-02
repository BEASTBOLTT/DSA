#include <bits/stdc++.h>

void dfs(int i, stack<int> &st, vector<bool> &visited, unordered_map<int, list<int>> &adj)
{
    visited[i] = true;

    for (auto x : adj[i])
    {
        if (!visited[x])
        {
            dfs(x, st, visited, adj);
        }
    }

    st.push(i);
}

void revDfs(int i, vector<bool> &visited, unordered_map<int, list<int>> &adj)
{
    visited[i] = true;

    for (auto x : adj[i])
    {
        if (!visited[x])
        {
            revDfs(x, visited, adj);
        }
    }
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
    unordered_map<int, list<int>> adj;
    int e = edges.size();
    for (int i = 0; i < e; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
    }

    vector<bool> visited(v);
    stack<int> st;
    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            dfs(i, st, visited, adj);
        }
    }

    unordered_map<int, list<int>> transpose;
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
        for (auto x : adj[i])
        {
            transpose[x].push_back(i);
        }
    }

    int count = 0;

    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        if (!visited[node])
        {
            count++;
            revDfs(node, visited, transpose);
        }
    }

    return count;
}