class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream v1(version1);
        stringstream v2(version2);
        string check;
        vector<int> c1, c2;
        while(getline(v1, check, '.')){
            c1.push_back(stoi(check));
        }
        while(getline(v2, check, '.')){
            c2.push_back(stoi(check));
        }
        int n = max(c1.size(), c2.size());
        for(int i = 0; i < n; i++){
            int a = (i < c1.size()) ? c1[i] : 0;
            int b = (i < c2.size()) ? c2[i] : 0;
            if(a < b){
                return -1;
            }
            else if(a > b){
                return 1;
            }
        }
        return 0;
    }
};