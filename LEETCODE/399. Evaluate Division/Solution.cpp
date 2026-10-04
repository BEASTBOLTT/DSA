class Solution
{
private:
    double dfs(string s, string d, unordered_map<string, list<pair<string, double>>> &adj, unordered_map<string, bool> &visited)
    {
        if (!adj.contains(s) || !adj.contains(d))
        {
            return -1.0;
        }
        if (s == d)
        {
            return 1.0;
        }
        visited[s] = true;
        for (auto x : adj[s])
        {
            if (!visited[x.first])
            {
                double check = dfs(x.first, d, adj, visited);
                if (check != -1)
                {
                    return check * x.second;
                }
            }
        }
        return -1.0;
    }

public:
    vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
    {
        unordered_map<string, list<pair<string, double>>> adj;
        int n = equations.size();
        for (int i = 0; i < n; i++)
        {
            adj[equations[i][0]].push_back({equations[i][1], values[i]});
            adj[equations[i][1]].push_back({equations[i][0], 1.00000 / values[i]});
        }

        vector<double> ans;
        for (auto x : queries)
        {
            unordered_map<string, bool> visited;
            ans.push_back(dfs(x[0], x[1], adj, visited));
        }

        return ans;
    }
};