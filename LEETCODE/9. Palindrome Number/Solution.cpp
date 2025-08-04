class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        else{
            vector <int> v;
            while(x>0){
                v.push_back(x%10);
                x = x/10;
            }
            int s = 0;
            int e = v.size() - 1;
            while(s<e){
                if (v[s] == v[e]){
                    s++;
                    e--;
                }
                else{
                    return false;
                }
            }
            return true;
        }
    }
};