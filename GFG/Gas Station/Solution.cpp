class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        int n = gas.size();
        int start = 0;
        int deficit = 0;
        int balance = 0;
        for(int i = 0; i < n; i++){
            balance += gas[i]-cost[i];
            if(balance < 0){
                deficit += balance;
                balance = 0;
                start = i+1;
            }
        }
        
        if(balance + deficit >= 0){
            return start;
        }
        return -1;
        
    }
};