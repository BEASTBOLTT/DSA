class Solution {
public:
    bool isVowel(char c) {  
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int ans = 0, l = 0, vowel = 0;

        for (int r = 0; r < s.size(); r++) {
            if (isVowel(s[r])){
                vowel++;
            }

            if ((r - l + 1) == k) {
                ans = max(ans, vowel);
                if (isVowel(s[l])) vowel--;
                l++;
            }
        }
        return ans;
    }
};