class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> check;
        int n = asteroids.size();
        for(int i = 0; i < n; i++){
            if(asteroids[i] > 0){
                check.push(asteroids[i]);
            }
            else{
                while(!check.empty() && check.top() < -asteroids[i] && check.top() > 0){
                    check.pop();
                }
                if(check.empty() || check.top() < 0){
                    check.push(asteroids[i]);
                }
                if(!check.empty() && check.top() == -asteroids[i]){
                    check.pop();
                }
            }
        }
        int m = check.size();
        vector<int> ans(m);
        for(int i = 0; i < m; i++){
            ans[m-i-1] = check.top();
            check.pop();
        }
        return ans;

    }
};