class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        stack<int> st;
        for(int i = 0; i < n; i++){
            st.push(i);
        }
        
        while(st.size() > 1){
            
            int a  = st.top();
            st.pop();
            
            int b = st.top();
            st.pop();
            
            if(mat[a][b]){
                st.push(b);
            }
            else{
                st.push(a);
            }
        }
        
        int ans = st.top();
        
        int zerocnt = 0;
        for(int i = 0; i < n; i++){
            if(mat[ans][i] == 0){
                zerocnt++;
            }
        }
        
        if(zerocnt != n-1){
            return -1;
        }
        
        int onecnt = 0;
        for(int i = 0; i < n; i++){
            if(mat[i][ans] == 1){
                onecnt++;
            }
        }
        
        if(onecnt != n){
            return -1;
        }
        
        return ans;
        
    }
};
