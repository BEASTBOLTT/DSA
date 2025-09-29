class Solution {
public:
    int dp[50][50] = {};
    
    int minScoreTriangulation(vector<int>& values, int i = 0, int j = 0) {
        if (j == 0){
            j = values.size() - 1;
        }
        if (dp[i][j] != 0){
            return dp[i][j];
        }
        int check = 0;
        for (int k = i + 1; k < j; ++k) {
            check = min(check == 0 ? INT_MAX : check,
                minScoreTriangulation(values, i, k) + 
                values[i] * values[k] * values[j] + 
                minScoreTriangulation(values, k, j));
        }
        return dp[i][j] = check;
    }
};