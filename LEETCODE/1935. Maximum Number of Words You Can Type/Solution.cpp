class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int i = 0;
        int n = text.size();
        int cnt = 0;
        while(i < n){
            for(char &x: brokenLetters){
                if(x == text[i]){
                    cnt++;
                    while(text[i] != ' ' && i < n-1){
                        i++;
                    }
                    break;
                }
            }
            i++;
        }
        int words = 1;
        for(char &x: text){
            if(x == ' '){
                words++;
            }
        }

        return words-cnt;
    }
};