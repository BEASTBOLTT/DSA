#include <bits/stdc++.h>
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    unordered_map<int, list<pair<int, int>>> adj;
    for (int i = 0; i < m; i++)
    {
        adj[g[i].first.first].push_back(make_pair(g[i].first.second, g[i].second));
        adj[g[i].first.second].push_back(make_pair(g[i].first.first, g[i].second));
    }

    vector<int> key(n + 1);
    vector<bool> mst(n + 1);
    vector<int> parent(n + 1);

    for (int i = 0; i <= n; i++)
    {
        key[i] = INT_MAX;
        mst[i] = false;
        parent[i] = -1;
    }

    key[1] = 0;

    for (int i = 1; i <= n; i++)
    {

        int mini = INT_MAX;
        int u;
        for (int j = 1; j <= n; j++)
        {
            if (mst[j] == false & key[j] < mini)
            {
                u = j;
                mini = key[j];
            }
        }

        mst[u] = true;

        for (auto x : adj[u])
        {
            int node = x.first;
            int weight = x.second;
            if (mst[node] == false && weight < key[node])
            {
                key[node] = weight;
                parent[node] = u;
            }
        }
    }

    vector<pair<pair<int, int>, int>> ans;
    for (int i = 2; i <= n; i++)
    {
        ans.push_back({{parent[i], i}, key[i]});
    }

    return ans;
}
