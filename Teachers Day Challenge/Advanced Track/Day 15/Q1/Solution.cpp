#include <iostream>
#include <vector>

using namespace std;

int main(){
    int ele;
    vector<int> hs;
    for(int i = 0; i < 4; i++){
        cin >> ele;
        hs.push_back(ele);
    }
    int cnt = 0;
    for(int i = 0; i < 3; i++){
        if(hs[i] == -1){
            continue;
        }
        for(int j = i+1; j < 4; j++){
            if(hs[i] == hs[j]){
                cnt++;
                hs[j] = -1;
            }
        }
    }
    cout << cnt;
    return 0;
}