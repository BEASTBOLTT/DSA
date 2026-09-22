#include <bits/stdc++.h>

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < e; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
    }

    vector<int> inDegree(v);

    for (auto x : adj)
    {
        for (int y : x.second)
        {
            inDegree[y]++;
        }
    }

    queue<int> q;

    for (int i = 0; i < v; i++)
    {
        if (inDegree[i] == 0)
        {
            q.push(i);
        }
    }

    vector<int> ans;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        ans.push_back(front);

        for (int x : adj[front])
        {
            inDegree[x]--;
            if (inDegree[x] == 0)
            {
                q.push(x);
            }
        }
    }

    return ans;
}