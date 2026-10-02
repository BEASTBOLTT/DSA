class Solution
{
private:
    vector<string> ans;

    void solve(int open, int close, string &check)
    {
        if (open == 0 && close == 0)
        {
            ans.push_back(check);
            return;
        }
        if (open > 0)
        {
            check.push_back('(');
            solve(open - 1, close, check);
            check.pop_back();
        }
        if (close > open)
        {
            check.push_back(')');
            solve(open, close - 1, check);
            check.pop_back();
        }
    }

public:
    vector<string> generateParenthesis(int n)
    {
        string check = "";
        solve(n, n, check);
        return ans;
    }
};