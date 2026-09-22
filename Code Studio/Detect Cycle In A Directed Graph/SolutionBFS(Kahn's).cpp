#include <bits/stdc++.h>

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < edges.size(); i++)
    {
        adj[edges[i].first - 1].push_back(edges[i].second - 1);
    }

    vector<int> inDegree(n);

    for (auto x : adj)
    {
        for (int y : x.second)
        {
            inDegree[y]++;
        }
    }

    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        if (inDegree[i] == 0)
        {
            q.push(i);
        }
    }

    int cnt = 0;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        cnt++;

        for (int x : adj[front])
        {
            inDegree[x]--;
            if (inDegree[x] == 0)
            {
                q.push(x);
            }
        }
    }

    return cnt != n;
}