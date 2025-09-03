class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = nums.size();
        for(int i = 0; i < ans; i++){
            if(i != nums[i]){
                return i;
            }
        }
        return ans;
    }
};