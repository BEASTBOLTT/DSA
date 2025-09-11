class Solution {
public:
    string sortVowels(string s) {
        string vowels = "";
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                vowels.push_back(s[i]);
                s[i] = '#';
            }
        }
        sort(vowels.begin(), vowels.end());
        int j = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '#'){
                s[i] = vowels[j];
                j++;
            }
        }

        return s;
    }
};