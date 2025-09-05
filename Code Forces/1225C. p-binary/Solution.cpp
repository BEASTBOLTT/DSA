#include <iostream>

using namespace std;

int makeTheIntegerZero(int num1, int num2) {
    for (int k = 1; k <= 60; k++) {
        long long x = num1 - 1LL * num2 * k;
        if (x < k) {
            return -1;
        }
        if (k >= __builtin_popcountll(x)) {
            return k;
        }
    }
    return -1;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    cout << makeTheIntegerZero(num1, num2);
    return 0;
}