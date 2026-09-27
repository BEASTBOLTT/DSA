class Solution
{
public:
    void solve(int s, int e, int k, int n, vector<vector<int>> &ans, vector<int> &check)
    {
        if (check.size() == k)
        {
            if (n == 0)
            {
                ans.push_back(check);
                return;
            }
        }

        if (s > e)
        {
            return;
        }

        if (s <= n)
        {
            check.push_back(s);
            solve(s + 1, e, k, n - s, ans, check);
            check.pop_back();
        }

        solve(s + 1, e, k, n, ans, check);
    }

    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> ans;
        vector<int> check;
        solve(1, 9, k, n, ans, check);
        return ans;
    }
};