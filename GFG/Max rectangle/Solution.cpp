class Solution {
    private:
        vector<int> nextSmallerElement(vector<int> &arr, int n)
        {
            stack<int> check;
            check.push(-1);
            vector<int> ans(n);
            for(int i = n-1; i >=0; i--){
                while(check.top() != -1 && arr[check.top()] >= arr[i]){
                    check.pop();
                }
                ans[i] = check.top();
                check.push(i);
            }
            return ans;
        }
        vector<int> prevSmallerElement(vector<int> &arr, int n)
        {
            stack<int> check;
            check.push(-1);
            vector<int> ans(n);
            for(int i = 0; i < n; i++){
                while(check.top() != -1 && arr[check.top()] >= arr[i]){
                    check.pop();
                }
                ans[i] = check.top();
                check.push(i);
            }
            return ans;
        }
        int largestRectangleArea(vector<int>& heights) {
            int n = heights.size();
            vector<int> nexts = nextSmallerElement(heights,n);
            vector<int> prevs = prevSmallerElement(heights,n);
    
            int maxarea = INT_MIN;
            for(int i = 0; i < n; i++){
                if(nexts[i] == -1){
                    nexts[i] = n;
                }
                int area = heights[i]*(nexts[i] - prevs[i] -1);
                maxarea = max(maxarea, area);
            }
            return maxarea;
        }
  public:
    int maxArea(vector<vector<int>> &mat) {
        
        int area = largestRectangleArea(mat[0]);
        
        for(int i = 1; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                if(mat[i][j] != 0){
                    mat[i][j] = mat[i][j] + mat[i-1][j];
                }
            }
            area = max(area, largestRectangleArea(mat[i]));
        }
        return area;
        
    }
};