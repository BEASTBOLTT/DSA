class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mxcan = 0;
        for(int a : candies){
            mxcan = max(mxcan, a);
        }
        vector<bool> result;
        for(int a : candies){
            if(a+extraCandies >= mxcan){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};