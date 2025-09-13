class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> vow;
        unordered_map<char, int> con;
        int n = s.size();
        for(char &i : s){
            if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'){
                vow[i]++;
            }
            else{
                con[i]++;
            }
        }
        int mxv = 0;
        int mxc = 0;
        int v = vow.size();
        for(auto &i : vow){
            mxv = max(mxv , i.second);
        }
        int c = con.size();
        for(auto &i : con){
            mxc = max(mxc, i.second);
        }
        return mxv+mxc;
    }
};