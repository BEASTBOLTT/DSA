#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;


    if (n <= 30) {
        cout << "NO" <<  endl;
        return;
    }


    int check = n - 30;


    if (check == 6 || check == 10 || check == 14) {
        
        check = n - 31;
        if (check > 0 && check != 6 && check != 10 && check != 15) {
            cout << "YES" <<  endl;
            cout << "6 10 15 " << check <<  endl;
        } 
        else {
            cout << "NO" <<  endl;
        }
    }
    else {
        cout << "YES" <<  endl;
        cout << "6 10 14 " << check <<  endl;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}