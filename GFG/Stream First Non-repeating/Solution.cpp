class Solution {
  public:
    string FirstNonRepeating(string &s) {
        queue<char> q;
        unordered_map<char, int> cnt;
        string ans = "";
        
        int n = s.size();
        for(int i = 0; i < n; i++){
            cnt[s[i]]++;
            q.push(s[i]);
            
            while(!q.empty()){
                if(cnt[q.front()] > 1){
                    q.pop();
                }
                else{
                    ans.push_back(q.front());
                    break;
                }
            }
            if(q.empty()){
                ans.push_back('#');
            }
        }
        return ans;
        
        
    }
};