class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mxa = 0;
        int lasta = 0;
        for(int i = 0; i < gain.size(); i++){
            mxa = max(mxa, lasta+gain[i]);
            lasta = lasta+gain[i];
        }
        return mxa;
    }
};