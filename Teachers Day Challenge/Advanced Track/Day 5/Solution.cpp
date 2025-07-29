class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){
            return a[0] < b[0];
        });
        
        vector<vector<int>> ans;
        int start = intervals[0][0];
        int end = intervals[0][1];
        if(intervals.size() == 1){
            vector<int> cover;
            cover.push_back(start);
            cover.push_back(end);
            ans.push_back(cover);
        }
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0]<= end){
                end = max(end, intervals[i][1]);
            }
            else{
                vector<int> cover;
                cover.push_back(start);
                cover.push_back(end);
                ans.push_back(cover);
                start = intervals[i][0];
                end = intervals[i][1];
            }
            if(i == intervals.size() - 1){
                vector<int> cover;
                cover.push_back(start);
                cover.push_back(end);
                ans.push_back(cover);
                start = intervals[i][0];
                end = intervals[i][1];
            }
            
        }
        return ans;
    }
};