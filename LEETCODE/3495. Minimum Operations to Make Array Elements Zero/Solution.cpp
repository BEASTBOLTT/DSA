#define ll long long
class Solution {
public:
    ll minOperations(vector<vector<int>>& queries) {
        ll ans = 0;
        for (auto &i : queries) {
            ll a = i[0], b = i[1], l = 0, r = 0, k1 = a, k2 = b, tot = 0;

            while (k1 != 0) { k1 = k1 / 4; l++; }
            while (k2 != 0) { k2 = k2 / 4; r++; }

            ll c = b - a + 1;
            ll d = (ll)pow(4, l) - a;
            
            // LEFT
            tot += min(c, d) * l;

            if (r != l) {
            // RIGHT
                tot += (b - (ll)pow(4, r - 1) + 1) * r;
            }

            if (r - l > 1) {
            // MIDDLE
                for (ll j = l + 1; j < r; j++) {
                    tot += ((ll)pow(4, j) - (ll)pow(4, j - 1)) * j;
                }
            }

            if (tot % 2 != 0) { ans++; }
            ans += tot / 2;
        }
        return ans;
    }
};