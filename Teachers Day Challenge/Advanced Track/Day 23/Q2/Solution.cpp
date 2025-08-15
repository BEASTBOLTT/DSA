#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> rank;
    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        rank.push_back(ele);
    }
    vector<int> ans;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(rank[j] > rank[i]){
                cnt++;
            }
        }
        ans.push_back(1+cnt);
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] <<" ";
    }
    return 0;
}