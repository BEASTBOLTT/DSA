class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> ans;
        for(int &i : nums){
            ans.push_back(i);
            while(ans.size() > 1){
                int x = ans.back();
                ans.pop_back();
                int y = ans.back();
                if(gcd(x,y) > 1){
                    ans.pop_back();
                    ans.push_back(lcm(x,y));
                }
                else{
                    ans.push_back(x);
                    break;
                }
            }
        }
        return ans;
    }
};