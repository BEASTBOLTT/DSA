#include <bits/stdc++.h>

bool isSafe(int x, int y, vector<vector<int>> &arr, int n, vector<vector<bool>> &visited)
{
    if (x >= n || y >= n || x < 0 || y < 0)
    {
        return false;
    }
    if (visited[x][y] == 1)
    {
        return false;
    }
    if (arr[x][y] != 1)
    {
        return false;
    }
    return true;
}

void solve(int x, int y, vector<vector<int>> &arr, int n, vector<string> &ans, vector<vector<bool>> &visited, string path)
{
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // down
    if (isSafe(x + 1, y, arr, n, visited))
    {

        solve(x + 1, y, arr, n, ans, visited, path + 'D');
    }

    // left
    if (isSafe(x, y - 1, arr, n, visited))
    {

        solve(x, y - 1, arr, n, ans, visited, path + 'L');
    }

    // right
    if (isSafe(x, y + 1, arr, n, visited))
    {

        solve(x, y + 1, arr, n, ans, visited, path + 'R');
    }
    // up
    if (isSafe(x - 1, y, arr, n, visited))
    {

        solve(x - 1, y, arr, n, ans, visited, path + 'U');
    }
    visited[x][y] = 0;
}

vector<string> searchMaze(vector<vector<int>> &arr, int n)
{
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, 0));

    string path = "";
    if (arr[0][0] == 0)
    {
        return ans;
    }

    solve(0, 0, arr, n, ans, visited, path);

    return ans;
}