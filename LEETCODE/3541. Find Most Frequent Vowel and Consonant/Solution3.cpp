class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> check;
        int mxv = 0;
        int mxc = 0;
        for(char &i : s){
            if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'){
                check[i]++;
                mxv = max(mxv , check[i]);
            }
            else{
                check[i]++;
                mxc = max(mxc, check[i]);
            }
        }
        return mxv+mxc;
    }
};