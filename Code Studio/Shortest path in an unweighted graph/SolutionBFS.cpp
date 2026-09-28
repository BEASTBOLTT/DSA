#include <bits/stdc++.h>

void bfs(int i, unordered_map<int, list<int>> adj, unordered_map<int, bool> &visited, unordered_map<int, int> &parent)
{
    visited[i] = true;
    parent[i] = -1;
    queue<int> q;
    q.push(i);
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        for (int x : adj[front])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
                parent[x] = front;
            }
        }
    }
}

vector<int> shortestPath(vector<pair<int, int>> edges, int n, int m, int s, int t)
{

    unordered_map<int, list<int>> adj;
    for (int i = 0; i < m; i++)
    {
        adj[edges[i].first].push_back(edges[i].second);
        adj[edges[i].second].push_back(edges[i].first);
    }
    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;
    int i = s;
    visited[i] = true;
    parent[i] = -1;
    queue<int> q;
    q.push(i);
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        for (int x : adj[front])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
                parent[x] = front;
            }
        }
    }
    vector<int> ans;
    int curr = t;

    while (curr != s)
    {
        ans.push_back(curr);
        curr = parent[curr];
    }
    ans.push_back(curr);
    reverse(ans.begin(), ans.end());
    return ans;
}
