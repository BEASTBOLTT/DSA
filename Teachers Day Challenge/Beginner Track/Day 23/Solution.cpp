#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    int i = 5;
    int cnt = 0;
    while(x>0){
        if(i>x){
            i--;
        }
        x = x-i;
        cnt++;
    }
    cout << cnt;
    return 0;
}