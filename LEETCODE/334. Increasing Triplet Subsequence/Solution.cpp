class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int ith = INT_MAX, jth = INT_MAX;

        for (int x : nums){
            if (x <= ith){
                ith = x;
            }
            else if (x <= jth){
                jth = x;
            }
            else return true;
        }

        return false;
    }
};