class Solution {
private:
    bool checkZero(int n){
        while(n>0){
            if(n%10 == 0){
                return false;
            }
            n = n/10;
        }
        return true;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        int m;
        for(m = 1; m < n; m++){
            if(checkZero(n-m) && checkZero(m)){
                return{n-m,m};
            }
        }
        return {m,n-m};
    }
};