class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int check = 0;

        for(int i; i < nums.size(); i++){
            if(check < 0){
                check = 0;
            }
            check = check + nums[i];
            ans = max(ans, check);
        }
        return ans;
    }
};