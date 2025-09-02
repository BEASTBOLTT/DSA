#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Segment {
    int l, r;
    int length;

    
    bool operator<(const Segment& other) const {
        if (length != other.length) {
            return length < other.length; 
        }
        return l > other.l;
    }
};

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        priority_queue<Segment> pq;

        pq.push({0, n - 1, n});
        for (int i = 1; i <= n; ++i) {
            Segment current_seg = pq.top();
            pq.pop();

            int l = current_seg.l;
            int r = current_seg.r;
            int mid;

            if ((r - l + 1) % 2 != 0) {
                mid = l + (r - l) / 2;
            } else { 
                mid = l + (r - l - 1) / 2;
            }

            a[mid] = i;

            if (l <= mid - 1) {
                pq.push({l, mid - 1, mid - 1 - l + 1});
            }
            if (mid + 1 <= r) {
                pq.push({mid + 1, r, r - (mid + 1) + 1});
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << a[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}