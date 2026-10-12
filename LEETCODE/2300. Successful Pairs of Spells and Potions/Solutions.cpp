class Solution
{
private:
    int bfsCount(int x, vector<int> &potions, long long success)
    {
        int s = 0;
        int e = potions.size() - 1;
        int count = 0;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            long long check = (long long)potions[mid] * x;
            if (check >= success)
            {
                count += e - mid + 1;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return count;
    }

public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        vector<int> ans;
        sort(potions.begin(), potions.end());
        for (int x : spells)
        {
            ans.push_back(bfsCount(x, potions, success));
        }

        return ans;
    }
};