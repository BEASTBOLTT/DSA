#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> line(n);
    for (int i = 0; i < n; ++i) {
        line[i] = ceil((double)a[i] / m);
    }

    int mxreq = 0;
    int li = -1;

    for (int i = 0; i < n; ++i) {
        if (line[i] >= mxreq) {
            mxreq = line[i];
            li = i;
        }
    }

    cout << li + 1 << endl;

    return 0;
}