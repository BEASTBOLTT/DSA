class Solution {
public:
    string reverseWords(string s) {
        vector <string> check;
        string st = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                st.push_back(s[i]);
            }
            else if(st != ""){
                check.push_back(st);
                st = "";
            }
            if(i == s.size()-1 && st != ""){
                check.push_back(st);
                st = "";
            }
            
        }
        reverse(check.begin(), check.end());

        string ans = "";
        for(int i = 0; i < check.size(); i++){
            for(char x : check[i]){
                ans.push_back(x);
            }
            ans.push_back(' ');
        }
        ans.pop_back();
        return ans;
    }
};