

void dfs(unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited, vector<int> &comp, int i)
{
    comp.push_back(i);
    visited[i] = true;

    for (auto x : adj[i])
    {
        if (!visited[x])
        {
            dfs(adj, visited, comp, x);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    vector<vector<int>> ans;
    unordered_map<int, bool> visited;
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < E; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }

    for (int i = 0; i < V; i++)
    {

        if (!visited[i])
        {
            vector<int> comp;
            dfs(adj, visited, comp, i);
            ans.push_back(comp);
        }
    }

    return ans;
}