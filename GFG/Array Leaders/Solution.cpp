class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        int le = arr[n-1];
        ans.push_back(le);
        for (int i = n-2; i>=0; i--){
            if (arr[i]>=le){
                le = arr[i];
                ans.push_back(le);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};