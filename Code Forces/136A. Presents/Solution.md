#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ele;
    vector<int> pre;
    pre.push_back(0);
    for(int i = 1; i <= n; i++){
        cin >> ele;
        pre.push_back(ele);
    }
    vector<int> ans;
    for(int i = 0; i <= n; i++){
        ans.push_back(0); 
    }
    for(int i = 1; i <= n; i++){
        ans[pre[i]] = i;
    }
    for(int i = 1; i <= n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}