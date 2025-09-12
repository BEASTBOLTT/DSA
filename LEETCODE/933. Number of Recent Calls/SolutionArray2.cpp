class RecentCounter {
private:
    vector<int> arr;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int cnt = 1;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i] >= t-3000 && arr[i] <= t){
                cnt++;
            }
        }
        arr.push_back(t);
        return cnt;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */