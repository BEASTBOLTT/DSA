class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
    
        int prodl = 1;
        for(int j = 0; j < nums.size(); j++){
            ans[j] = ans[j]*prodl;
            prodl = prodl*nums[j];
        }
        int prodr = 1;
        for(int j = nums.size()-1; j >= 0 ; j--){
            ans[j] = ans[j]*prodr;
            prodr = prodr*nums[j];
        }
    
        return ans;
    }
};