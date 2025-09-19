class Spreadsheet {
    unordered_map<string, int> ss;
public:
    Spreadsheet(int rows) {
    }
    
    void setCell(string cell, int value) {
        ss[cell] = value;
    }
    
    void resetCell(string cell) {
        ss[cell] = 0;
    }
    
    int getValue(string formula) {
        formula = formula.substr(1);
        int n = formula.size();
        for(int i = 0; i < n; i++){
            if(formula[i] == '+'){
                string op1 = formula.substr(0,i);
                string op2 = formula.substr(i+1);
                int pre;
                if(op1[0] >= 'A' && op1[0] <= 'Z'){
                    pre = ss[op1];
                }
                else{
                    pre = stoi(op1);
                }
                int suf;
                if(op2[0] >= 'A' && op2[0] <= 'Z'){
                    suf = ss[op2];
                }
                else{
                    suf = stoi(op2);
                }
                return pre + suf;
            }
            
        }
        return 0;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */