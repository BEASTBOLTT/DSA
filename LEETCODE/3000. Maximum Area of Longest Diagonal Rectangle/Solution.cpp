class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        
        long long maxd = 0;
        int ans = 0;
        for(int i = 0; i < dimensions.size(); i++){
            int l = dimensions[i][0];
            int b = dimensions[i][1];
            long long d = (l*l)+(b*b);
            if(d > maxd  || (d == maxd && (l*b) > ans)){
                maxd = d;
                ans = l*b;

            }
        }
        
        return ans;
    }
};