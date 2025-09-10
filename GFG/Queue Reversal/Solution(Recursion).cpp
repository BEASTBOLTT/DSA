// function Template for C++

class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        if(q.empty()){
            return q;
        }
        int a = q.front();
        q.pop();
        reverseQueue(q);
        q.push(a);
        
        return q;
    }
};