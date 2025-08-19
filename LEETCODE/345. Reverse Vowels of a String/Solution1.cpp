class Solution {
public:
    string reverseVowels(string s) {
        vector <int> vowels;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                vowels.push_back(s[i]);
                s[i] = '~';
            }
        }
        reverse(vowels.begin(), vowels.end());
        for(char m : vowels){
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '~'){
                    s[i] = m;
                    break;
                }
            }
        }
        return s;
        
    }
};