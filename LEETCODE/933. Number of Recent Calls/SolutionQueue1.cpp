class RecentCounter {
private:
    queue<int> q;
public:
    RecentCounter() {
        q.push(NULL);
    }
    
    int ping(int t) {
        q.push(t);
        if(q.front() == NULL){
            q.pop();
        }
        while(!(q.front() >= t-3000 && q.front() <= t)){
            q.pop();
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */