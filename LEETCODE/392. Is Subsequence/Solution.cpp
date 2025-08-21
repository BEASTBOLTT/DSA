class Solution {
public:
    bool isSubsequence(string s, string t) {
        string ans = "";
        int index = 0;
        for(int i = 0; i < s.size(); i++){
            for(int j = index; j < t.size(); j++){
                if(t[j] == s[i]){
                    index = j+1;
                    ans.push_back(t[j]);
                    break;
                }
            }
            if(ans == ""){
                return false;
            }
        }
        if(ans == s){
            return true;
        }
        return false;
        
    }
};