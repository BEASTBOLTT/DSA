class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        if(k > q.size()){
            return q;
        }
        stack<int> s;
        for(int i = 0; i < k; i++){
            s.push(q.front());
            q.pop();
        }
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        
        int n = q.size();
        for(int i = 0; i < n-k; i++){
            q.push(q.front());
            q.pop();
        }
        
        return q;
        
    }
};