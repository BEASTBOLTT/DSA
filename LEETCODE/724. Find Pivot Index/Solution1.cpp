class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int lsum = 0;
            int rsum = 0;
            int j = i-1;
            while(j >= 0){
                lsum = lsum+nums[j];
                j--;
            }
            j = i+1;
            while(j<nums.size()){
                rsum = rsum + nums[j];
                j++;
            }
            if(rsum == lsum){
                return i;
            }
        }
        return -1;
    }
};