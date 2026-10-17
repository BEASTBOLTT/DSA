class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> temp;

        for (int i = 0; i < n; i++)
        {
            while (!temp.empty() && temperatures[i] > temperatures[temp.top()])
            {
                int j = temp.top();
                temp.pop();
                ans[j] = i - j;
            }
            temp.push(i);
        }

        return ans;
    }
};