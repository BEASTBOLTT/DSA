class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int> d;
        vector<int> ans;
        
        for(int i = 0; i < k; i++){
            if(arr[i] < 0){
                d.push_back(i);
            }
        }
        if(!d.empty()){
            ans.push_back(arr[d.front()]);
        }
        else{
            ans.push_back(0);
        }
        
        int n = arr.size();
        for(int i = k; i < n; i++){
            if(!d.empty() && i - d.front() >= k){
                d.pop_front();
            }
            if(arr[i] < 0){
                d.push_back(i);
            }
            
            if(!d.empty()){
                ans.push_back(arr[d.front()]);
            }
            else{
                ans.push_back(0);
            }
        }
        
        return ans;
        
    }
};