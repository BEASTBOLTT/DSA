#include <bits/stdc++.h>

void addAns(vector<vector<int>> &ans, vector<vector<int>> &boards, int n)
{

    vector<int> temp;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            temp.push_back(boards[i][j]);
        }
    }

    ans.push_back(temp);
}

void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &boards, int n,

           unordered_map<int, bool> &rowCheck, unordered_map<int, bool> &upDiagCheck, unordered_map<int, bool> &downDiagCheck)
{

    // base case

    if (col == n)
    {

        addAns(ans, boards, n);

        return;
    }

    for (int row = 0; row < n; row++)
    {

        // check for no attack using hashmap

        if (!rowCheck[row] && !upDiagCheck[col + row] && !downDiagCheck[(n - 1) + (col - row)])
        {

            // if it is safe then assing "true" to it

            rowCheck[row] = true;

            upDiagCheck[col + row] = true;

            downDiagCheck[(n - 1) + (col - row)] = true;

            // then place Queen on it

            boards[row][col] = 1;

            // call recursion to solve it

            solve(col + 1, ans, boards, n, rowCheck, upDiagCheck, downDiagCheck);

            // backtracking(assign the previous place to 0 so that the further operation done)

            boards[row][col] = 0;

            // backtracking ( assign all the previous mapping to false for further operation)

            rowCheck[row] = false;

            upDiagCheck[col + row] = false;

            downDiagCheck[(n - 1) + (col - row)] = false;
        }
    }
}

vector<vector<int>> nQueens(int n)

{

    unordered_map<int, bool> rowCheck;

    unordered_map<int, bool> upDiagCheck;

    unordered_map<int, bool> downDiagCheck;

    vector<vector<int>> boards(n, vector<int>(n, 0));

    vector<vector<int>> ans;

    solve(0, ans, boards, n, rowCheck, upDiagCheck, downDiagCheck);

    return ans;
}