class Solution {
public:
    string decodeString(string s) {
        string ans = "";
        int n = s.size();
        stack<int> cnt;
        stack<string> dString;
        int num = 0;
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i])){
                num = num*10 + (s[i]-'0');
            }
            else if(s[i] == '[')
            {
                cnt.push(num);
                dString.push(ans);
                num = 0;
                ans.clear();
            }
            else if(s[i] == ']')
            {
                int n = cnt.top();
                cnt.pop();
                string previousString = dString.top();
                dString.pop();

                string expanded;
                expanded.reserve(previousString.size()+ans.size()*n);
                expanded+=previousString;
                for(int i=1;i<=n;i++)
                expanded+=ans;
                ans = move(expanded);

            }
            else{
                ans.push_back(s[i]);
            }
            
        }
        return ans;
    }
};