class Solution {
public:
    int maximum69Number (int num) {
        vector<int> nums;
        while(num > 0){
            nums.push_back(num%10);
            num = num/10;
        }
        int ans = 0;
        bool changed = false; 
        for(int i = nums.size()-1; i >=0; i--){
            if(nums[i]  == 6 && !changed){
                changed = true;
                nums[i] = 9;
            }
            ans = ans*10 + nums[i];
        }
        return ans;
    }
};