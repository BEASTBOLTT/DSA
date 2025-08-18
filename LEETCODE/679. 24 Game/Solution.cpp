class Solution {
    const double closeTo = 1e-6;
private:
    vector<double> check(double a, double b) {
        vector<double> ans;
        ans.push_back(a + b);
        ans.push_back(a - b);
        ans.push_back(b - a);
        ans.push_back(a * b);
        if (fabs(b) > closeTo) ans.push_back(a / b);
        if (fabs(a) > closeTo) ans.push_back(b / a);
        return ans;
    }
    bool solve(vector<double>& nums) {
        if (nums.size() == 1) {
            return fabs(nums[0] - 24.0) < closeTo;
        }

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i == j) continue;

                vector<double> forward;
                for (int k = 0; k < nums.size(); k++) {
                    if (k != i && k != j) forward.push_back(nums[k]);
                }

                for (double val : check(nums[i], nums[j])) {
                    forward.push_back(val);
                    if (solve(forward)) return true;
                    forward.pop_back();
                }
            }
        }
        return false;
    }

    
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> nums;
        for (int n : cards) nums.push_back((double)n);
        return solve(nums);
    }
};