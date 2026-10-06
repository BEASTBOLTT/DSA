class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        vector<vector<int>> visited = grid;
        int ans = -1;
        int n = grid.size();
        int m = grid[0].size();
        vector<int> row = {-1, 0, 1, 0};
        vector<int> col = {0, 1, 0, -1};
        int fresh = 0;
        queue<pair<pair<int, int>, int>> q;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (visited[i][j] == 2)
                {
                    q.push({{i, j}, 0});
                }
                else if (visited[i][j] == 1)
                {
                    fresh++;
                }
            }
        }

        if (fresh == 0)
        {
            return 0;
        }
        if (q.empty())
        {
            return -1;
        }

        while (!q.empty() && fresh != 0)
        {
            int x = q.front().first.first;
            int y = q.front().first.second;
            int d = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                int r = x + row[i];
                int c = y + col[i];

                if (r >= 0 && r < n && c >= 0 && c < m && visited[r][c] == 1)
                {
                    fresh--;
                    if (fresh == 0)
                    {
                        ans = d + 1;
                        break;
                    }
                    q.push({{r, c}, d + 1});
                    visited[r][c] = 2;
                }
            }
        }
        return ans;
    }
};