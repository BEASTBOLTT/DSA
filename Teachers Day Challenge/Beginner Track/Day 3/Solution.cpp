class Solution {
public:
    bool isPalindrome(string s) {
        vector <char> s1;
        for(int i = 0; i < s.size(); i++){
            if (isalpha(s[i]) || isdigit(s[i])){
                s1.push_back(s[i]);
            }
        }
        int st = 0;
        int e = s1.size()-1;
        while(st < e){
            if (tolower(s1[st]) != tolower(s1[e])) {
                return false;
            }
            st++;
            e--;
        }
        return true;
    
    }
};