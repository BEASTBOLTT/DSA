#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> boys;
    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        boys.push_back(ele);
    }
    int m;
    cin >> m;
    vector<int> girls;
    for(int i = 0; i < m; i++){
        int ele;
        cin >> ele;
        girls.push_back(ele);
    }
    
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(fabs(boys[i]-girls[j]) <= 1){
                cnt++;
                girls[j] = -1;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}