class Solution {
public:
    string predictPartyVictory(string senate) {
        int dcnt = 0;
        int rcnt = 0;
        queue<char> s;
        int n = senate.size();
        for(int i = 0; i < n; i++){
            s.push(senate[i]);
            if(senate[i] == 'D'){
                dcnt++;
            }
            else{
                rcnt++;
            }
        }
        int rcheck = 0;
        int dcheck = 0;
        while(!s.empty() && rcnt != 0 && dcnt != 0){
            if(s.front() == 'D'){
                if(rcheck){
                    rcheck--;
                    s.pop();
                    dcnt--;
                }
                else{
                    dcheck++;
                    s.push(s.front());
                    s.pop();
                }
            }
            else{
                if(dcheck){
                    dcheck--;
                    s.pop();
                    rcnt--;
                }
                else{
                    rcheck++;
                    s.push(s.front());
                    s.pop();
                }
            }
        }
        if(dcnt == 0){
            return "Radiant";
        }
        return "Dire";
        
    }
};