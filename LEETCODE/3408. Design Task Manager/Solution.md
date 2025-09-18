class TaskManager {
    unordered_map<int, pair<int, int>> tm;
    set<pair<int, int>> s;
public:
    TaskManager(vector<vector<int>>& tasks) {
        for(auto &x : tasks){
            s.insert({x[2], x[1]});
            tm[x[1]] = {x[0], x[2]};
        }
    }
    
    void add(int userId, int taskId, int priority) {
        s.insert({priority, taskId});
        tm[taskId] = {userId, priority};
    }
    
    void edit(int taskId, int newPriority) {
        pair<int, int> p = tm[taskId];
        s.erase({p.second, taskId});
        s.insert({newPriority, taskId});
        tm[taskId] = {p.first, newPriority};
    }
    
    void rmv(int taskId) {
        pair<int, int> p = tm[taskId];
        s.erase({p.second, taskId});
        tm.erase(taskId);
    }
    
    int execTop() {
        if(tm.empty()){
            return -1;
        }
        auto x = s.end();
        x--;                              
        pair<int, int> p = *x;
        int ans = tm[p.second].first;      
        tm.erase(p.second);                
        s.erase(x);                      
        return ans;
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */