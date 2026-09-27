class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        vector<vector<int>> ans(2);
        unordered_set<int> onlyNum1(nums1.begin(), nums1.end());
        unordered_set<int> onlyNum2(nums2.begin(), nums2.end());

        for (int num : onlyNum1)
        {
            if (onlyNum2.count(num) == 0)
            {
                ans[0].push_back(num);
            }
        }
        for (int num : onlyNum2)
        {
            if (onlyNum1.count(num) == 0)
            {
                ans[1].push_back(num);
            }
        }
        return ans;
    }
};