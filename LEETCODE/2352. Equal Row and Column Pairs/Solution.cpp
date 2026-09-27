class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        map<vector<int>, int> rowMap;
        int n = grid.size();
        for (auto row : grid)
        {
            rowMap[row]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            vector<int> col;
            for (int j = 0; j < n; j++)
            {
                col.push_back(grid[j][i]);
            }
            if (rowMap.count(col))
            {
                ans += rowMap[col];
            }
        }

        return ans;
    }
};