#include <iostream>

using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >>w;

    int totalBill = 0;
    for(int i = 1; i <= w; i++){
        totalBill = totalBill + i*k;
    }
    cout << max(totalBill - n, 0);
    return 0;
}