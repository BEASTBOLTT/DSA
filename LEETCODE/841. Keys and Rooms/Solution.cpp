class Solution
{
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        int n = rooms.size();
        vector<bool> visited(n);
        for (int i = 0; i < n; i++)
        {
            visited[i] = false;
        }
        queue<int> q;
        q.push(0);
        visited[0] = true;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (int x : rooms[node])
            {
                if (!visited[x])
                {
                    visited[x] = true;
                    q.push(x);
                }
            }
        }

        auto check = find(visited.begin(), visited.end(), false);

        return check == visited.end();
    }
};