class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) return "0";

        string ans;

        if ((numerator < 0) ^ (denominator < 0)){
            ans.push_back('-');
        }

        long num = labs((long)numerator);
        long den = labs((long)denominator);

        
        ans += to_string(num / den);
        long remainder = num % den;
        if (remainder == 0){
            return ans;
        }

        ans.push_back('.');
        unordered_map<long, int> mp;
        while (remainder != 0) {
            if (mp.count(remainder)) {
                ans.insert(mp[remainder], "(");
                ans.push_back(')');
                return ans;
            }
            mp[remainder] = ans.size();
            remainder *= 10;
            ans += to_string(remainder / den);
            remainder %= den;
        }
        return ans;
    }
};