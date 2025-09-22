class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int mx = 0;
        unordered_map<int, int> check;
        for(int &i: nums){
            check[i]++;
            mx = max(mx, check[i]);
        }
        int ans = 0;
        for(auto &i: check){
            if(i.second == mx){
                ans += i.second;
            }
        }
        return ans;
    }
};