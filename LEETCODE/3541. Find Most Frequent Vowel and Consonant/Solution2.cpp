class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> vow;
        unordered_map<char, int> con;
        int mxv = 0;
        int mxc = 0;
        for(char &i : s){
            if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'){
                vow[i]++;
                mxv = max(mxv , vow[i]);
            }
            else{
                con[i]++;
                mxc = max(mxc, con[i]);
            }
        }
        return mxv+mxc;
    }
};