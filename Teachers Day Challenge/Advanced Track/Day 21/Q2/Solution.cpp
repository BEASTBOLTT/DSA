#include <iostream>

using namespace std;

int main(){
    int n;
    cin >>n;
    string st;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >>st;
        if(st[0] == '+' || st[1] == '+'){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    cout << cnt;
    return 0;
}