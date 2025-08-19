class Solution {
public:
    bool isVowel(string&s, int index) {
        if (s[index] == 'a' || s[index] == 'A' ||
            s[index] == 'e' || s[index] == 'E' ||
            s[index] == 'i' || s[index] == 'I' ||
            s[index] == 'o' || s[index] == 'O' ||
            s[index] == 'u' || s[index] == 'U' 
        )
            return true;
        else
            return false;
    }
    
    void findFI(string& s, int& fI) {
        for(int i=fI; i<s.size(); i++) {
            if (isVowel(s, i)){
                fI = i;
                break;
            }
            else if (i==s.size()-1) {
                fI = -1;
                break;
            }
        }
    }

    void findBI(string& s, int& bI) {
        for(int i=bI; i>=0; i--){
            if (isVowel(s, i)){
                bI =  i;
                break;
            }
            else if (i==0) {
                bI = -1;
                break;
            }
        }
    }

    string reverseVowels(string s) {
        int fI = 0;
        int bI = s.size() - 1;
        while (fI < bI) {
            findFI(s, fI);
            findBI(s, bI);
            if (fI >= bI || bI==-1 || fI == -1)
                break;
            char temp = s[bI];
            s[bI] = s[fI];
            s[fI] = temp;

            fI++;
            bI--;
        }
        return s;
    }
};