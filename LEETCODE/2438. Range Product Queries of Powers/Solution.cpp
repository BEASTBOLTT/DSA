class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        string st = bitset<32>(n).to_string();
        vector<int> powers;
        int m = 1e9+7;
        for (int i = st.size()-1; i >=0; i--){
            if(st[i] == '1'){
                powers.push_back(pow(2,32-1-i));
            }
        }
        vector<int> ans;
        for(int i = 0; i < queries.size(); i++){
            long long prod = 1;
            for(int j = queries[i][0]; j <= queries[i][1]; j++){
                prod = (prod * powers[j]) % m;
            }
            ans.push_back(prod);
        }
        
        return ans;
    }
};