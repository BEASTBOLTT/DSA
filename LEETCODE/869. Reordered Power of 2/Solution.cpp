class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string st = to_string(n);
        sort(st.begin(), st.end());
        for(int i = 0; i <=30; i++){
            if(pow(2,i) > pow(10, st.size()+1)){
                return false;
            }
            int p = pow(2,i);
            string pw = to_string(p);
            sort(pw.begin(), pw.end());
            if(pw == st){
                return true;
            }
        }
        return false;
    }
};