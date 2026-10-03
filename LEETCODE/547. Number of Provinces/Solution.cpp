class Solution
{
private:
    void dfs(int i, vector<bool> &visited, unordered_map<int, list<int>> &adj)
    {
        visited[i] = true;

        for (int x : adj[i])
        {
            if (!visited[x])
            {
                dfs(x, visited, adj);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int n = isConnected.size();
        unordered_map<int, list<int>> adj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                else if (isConnected[i][j] == 1)
                {
                    adj[i + 1].push_back(j + 1);
                }
            }
        }

        vector<bool> visited(n + 1);
        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                ans++;
                dfs(i, visited, adj);
            }
        }

        return ans;
    }
};