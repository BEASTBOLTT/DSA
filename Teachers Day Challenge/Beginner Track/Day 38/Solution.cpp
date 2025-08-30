#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int mx;
    int mn;
    int cnt = 0;
    cin >> mn;
    mx = mn;
    for(int i = 1; i < n; i++){
        int ele;
        cin >> ele;
        if(ele > mx){
            mx = ele;
            cnt++;
        }
        else if(ele < mn){
            mn = ele;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}