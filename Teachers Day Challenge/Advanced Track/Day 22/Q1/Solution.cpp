#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n, x, best = -1, counter = 0, last = 0;
    cin >> n;

    while (n--) {
        cin >> x;
        if (x < last) {
            best = max(best, counter);
            counter = 0;
        }
        counter++;
        last = x;
    }
    best = max(best, counter);
    cout << best << endl;
    return 0;

}