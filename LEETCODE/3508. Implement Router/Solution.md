class Router {
public:
    int memoryLimit;
    deque<vector<int>> q;
    set<vector<int>> s;
    unordered_map<int, vector<int>> d;

    Router(int memoryLimit) {
        this->memoryLimit = memoryLimit;
    }
    
    bool addPacket(int source, int destination, int timestamp) {
        vector<int> packet = {source, destination, timestamp};
        if(s.count(packet)){
            return false;
        }
        if(q.size() == memoryLimit){
            vector<int> first = q.front();
            q.pop_front();
            s.erase(first);

            auto &vec = d[first[1]];
            auto check = lower_bound(vec.begin(), vec.end(), first[2]);
            if (check != vec.end()) vec.erase(check);
        }

        q.push_back(packet);
        s.insert(packet);
        d[destination].push_back(timestamp);
        return true;
    } 
    
    vector<int> forwardPacket() {
        if(q.empty()) return {};
        vector<int> packet = q.front();
        q.pop_front();
        s.erase(packet);

        auto &vec = d[packet[1]];
        auto it = lower_bound(vec.begin(), vec.end(), packet[2]);
        if (it != vec.end()) vec.erase(it);

        return packet;
    }
    
    int getCount(int destination, int startTime, int endTime) {
        if (!d.count(destination)) return 0;
        auto &vec = d[destination];
        auto start = lower_bound(vec.begin(), vec.end(), startTime);
        auto end = upper_bound(vec.begin(), vec.end(), endTime);
        return end - start;
    }
};

/**
 * Your Router object will be instantiated and called as such:
 * Router* obj = new Router(memoryLimit);
 * bool param_1 = obj->addPacket(source,destination,timestamp);
 * vector<int> param_2 = obj->forwardPacket();
 * int param_3 = obj->getCount(destination,startTime,endTime);
 */