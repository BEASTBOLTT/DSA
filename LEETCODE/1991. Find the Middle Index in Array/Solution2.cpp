class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        int req = 0;
        int ans = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (req == (sum - req - nums[i])) {
                ans = i;
                break;
            }
            req += nums[i];
        }
        return ans;
    }
};