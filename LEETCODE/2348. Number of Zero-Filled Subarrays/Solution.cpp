class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt = 0;
        int occurrence = 0;
        for(int n : nums){
            if(n == 0){
                occurrence++;
                cnt+= occurrence;
            }
            else{
                occurrence = 0;
            }
        }
        return cnt;
        
    }
};