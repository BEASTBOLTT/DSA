class Solution {
public:
    int maxCollectedFruits(vector<vector<int>>& grid) {
        int n = grid.size(), ans = 0;

        for (int i = 0; i < n; i++) {
            ans += grid[i][i];
        }

        for (int check = 0; check < 2; check++) {
            if (check == 1) {
                for (int i = 0; i < n; i++) {
                    for (int j = i + 1; j < n; j++) {
                        swap(grid[i][j], grid[j][i]);
                    }
                }
            }

            vector<int> p(n, -1), c(n, -1);
            p[n - 1] = grid[0][n - 1];

            for(int row = 1; row < n - 1; row++) {
                fill(c.begin(), c.end(), -1);
                for (int i = 0; i < n; i++) {
                    if (p[i] < 0) continue;
                    if (i > 0) 
                        c[i - 1] = max(c[i - 1], p[i] + grid[row][i - 1]);
                    if (i < n - 1) 
                        c[i + 1] = max(c[i + 1], p[i] + grid[row][i + 1]);
                    c[i] = max(c[i], p[i] + grid[row][i]);
                }
                swap(p, c);
            }
            ans += p[n - 1];
        }
        return ans;
    }
};