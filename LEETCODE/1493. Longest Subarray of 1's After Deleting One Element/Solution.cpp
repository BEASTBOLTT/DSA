class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int index = 0;
        int ans = 0;
        bool loop = true;
        while (loop){
            int cnt = 0;
            bool zero = false;
            for (int i = index; i < nums.size(); i++){
                if(i == nums.size()-1){
                    loop = false;
                }
                if(nums[i] == 0){
                    if(!zero){
                        zero = true;
                        index = i+1;
                        continue;
                    }
                    else{
                        break;
                    }
                }
                else{
                    cnt++;
                }
            }
            if(!zero){
                cnt--;
            }
            ans = max(ans, cnt);
            zero = false;
        }
        return ans;
    }
};