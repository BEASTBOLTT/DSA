class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> num;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == val){
                continue;
            }
            else{
                num.push_back(nums[i]);
            }
        }
        nums = num;
        return nums.size();
    }
};