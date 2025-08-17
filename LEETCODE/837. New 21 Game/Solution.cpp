class Solution {
public:
    static double new21Game(int n, int k, int maxPts) {
        if (k==0 || n>=k+maxPts-1) return 1;
        vector<double> check(n+1, 0);
        check[0]=1;
        double swSum=1, prob=0;
        
        for (int l=0, r=1; r<=n; r++) {
            check[r]=swSum/maxPts;
            (r<k)?swSum+=check[r]:prob+=check[r];
            if (r>=maxPts) 
                swSum-=check[l++];
        }
        return prob;
    }
};