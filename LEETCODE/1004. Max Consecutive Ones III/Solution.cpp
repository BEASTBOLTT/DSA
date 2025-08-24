class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        int i = 0;
        int j = 0;
        while (j < nums.size()){
            if(nums[j] == 0 && k == 0){
                while(nums[i] != 0){
                    i++;
                }
                i++;
            }
            else if(nums[j] == 0 && k > 0){
                k--;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};