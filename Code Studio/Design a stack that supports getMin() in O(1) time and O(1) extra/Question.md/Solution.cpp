class SpecialStack {
    private:

    vector<vector<int>> stack;

    public:
        
    void push(int data) {
        int mnv = getMin();
        if(stack.empty() || mnv > data){
            mnv = data;
        }
        stack.push_back({data, mnv});
    }

    void pop() {
        stack.pop_back();
    }

    int top() {
        if(stack.empty()){
            return -1;
        }
        return stack.back()[0];
    }

    int getMin() {
        if(stack.empty()){
            return -1;
        }
        return stack.back()[1];
    }  
};