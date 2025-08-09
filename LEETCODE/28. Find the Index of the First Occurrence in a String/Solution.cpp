class Solution {
public:
    int strStr(string haystack, string needle) {
        int check;
        int h = haystack.size();
        int n = needle.size();
        for (int i = 0; i <= h-n; i++){
            if(haystack[i]==needle[0]){
                check = 1;
                for (int j = 1; j < n; j++){
                    if(haystack[i+j]==needle[j]){
                        check = check + 1;
                    }
                    else{
                        break;
                    }
                }
                if (check == n){
                    
                    return i;
                }
            }
        }
        return -1;
    }
};