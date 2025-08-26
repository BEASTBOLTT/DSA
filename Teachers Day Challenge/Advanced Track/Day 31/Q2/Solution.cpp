#include <iostream>
#include <vector>

using namespace std;

int main(){
    int x;
    cin >> x;
    vector<int> bills;
    bills = {1,5,10,20,100};
    int i = 4;
    int ans = 0;
    while(x > 0){
        ans += x/bills[i];
        x -= (x/bills[i])*bills[i];
        i--;
    }
    cout << ans;
}