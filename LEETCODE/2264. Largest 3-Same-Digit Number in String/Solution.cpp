class Solution {
public:
    string largestGoodInteger(string num) {
        int mx = -1;
        int cnt = 1;
        for(int i = 1; i < num.size(); i++){
            if(num[i] == num[i-1]){
                cnt++;
                if((cnt == 3)&&(num[i] > mx)){
                    
                    mx = num[i];
                    
                }
            }
            else{
                cnt = 1;
            }
        }
        string ans = "";
        if (mx >=0){
            ans.push_back(char(mx));
            ans.push_back(char(mx));
            ans.push_back(char(mx));
        }
        return ans;
    }
};