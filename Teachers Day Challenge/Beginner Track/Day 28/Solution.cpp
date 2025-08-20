#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> farm;
    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        farm.push_back(ele);
    }
    int mxcnt = 1;
    
    for(int i = 0; i < n; i++){
        int cnt = 1;
        for(int j = i; j > 0; j--){
            if(farm[j-1] > farm[j]){
                break;
            }
            else{
                cnt++;
            }
        }
        for(int j = i; j < n-1; j++){
            if(farm[j+1] > farm[j]){
                break;
            }
            else{
                cnt++;
            }
        }
        mxcnt = max(mxcnt, cnt);
    }
    cout << mxcnt;
    return 0;
}