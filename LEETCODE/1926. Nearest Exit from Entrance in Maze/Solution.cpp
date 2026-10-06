class Solution
{
public:
    int nearestExit(vector<vector<char>> &maze, vector<int> &entrance)
    {
        vector<vector<char>> visited = maze;
        vector<int> row = {-1, 0, 1, 0};
        vector<int> col = {0, 1, 0, -1};

        int ans = -1;
        queue<pair<pair<int, int>, int>> q;

        int n = maze.size();
        int m = maze[0].size();

        q.push({{entrance[0], entrance[1]}, 0});
        visited[entrance[0]][entrance[1]] = '+';

        while (!q.empty() && ans == -1)
        {
            int x = q.front().first.first;
            int y = q.front().first.second;
            int d = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int r = x + row[i];
                int c = y + col[i];

                if (r >= 0 && r < n && c >= 0 && c < m && visited[r][c] == '.')
                {
                    if (r == 0 || r == n - 1 || c == 0 || c == m - 1)
                    {
                        ans = d + 1;
                        break;
                    }
                    q.push({{r, c}, d + 1});
                    visited[r][c] = '+';
                }
            }
        }
        return ans;
    }
};