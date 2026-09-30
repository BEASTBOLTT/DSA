#include <bits/stdc++.h>

void dfs(int i, int &parent, int &step, vector<int> &steps, vector<int> &low, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<vector<int>> &ans)
{
    visited[i] = true;
    low[i] = steps[i] = step++;

    for (auto x : adj[i])
    {
        if (x == parent)
        {
            continue;
        }
        if (!visited[x])
        {
            dfs(x, i, step, steps, low, visited, adj, ans);
            low[i] = min(low[i], low[x]);
            if (steps[i] < low[x])
            {
                vector<int> entry;
                entry.push_back(i);
                entry.push_back(x);
                ans.push_back(entry);
            }
        }
        else
        {
            low[i] = min(low[i], steps[x]);
        }
    }
}

vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e)
{
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < e; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }

    unordered_map<int, bool> visited;
    vector<int> low(v);
    vector<int> steps(v);
    int step = 0;
    int parent = -1;

    for (int i = 0; i < v; i++)
    {
        low[i] = -1;
        steps[i] = -1;
    }

    vector<vector<int>> ans;

    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            dfs(i, parent, step, steps, low, visited, adj, ans);
        }
    }

    return ans;
}