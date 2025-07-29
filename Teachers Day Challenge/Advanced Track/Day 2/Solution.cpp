class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for (string& s : strs) {
            string check = s;
            sort(check.begin(), check.end());
            res[check].push_back(s);
        }

        vector<vector<string>> answer;
        for (auto& ans : res) {
            answer.push_back(ans.second);
        }

        return answer;        
    }
};